#include <memory>
#include <chrono>
#include <cstdlib>

#include "rclcpp/rclcpp.hpp"
#include "cipher_interfaces/msg/cipher_message.hpp"
#include "cipher_interfaces/srv/cipher_answer.hpp" 

using std::placeholders::_1;
using namespace std::chrono_literals;

class DecipherNode : public rclcpp::Node
{
  public:
    DecipherNode()
    : Node("decipher_node")
    {
    	
    	this->declare_parameter<std::string>("topic_name", "topic");
        this->declare_parameter<std::string>("service_name", "check_answer");
        
        subscription_ = this->create_subscription<cipher_interfaces::msg::CipherMessage>(
        this->get_parameter("topic_name").as_string(), 10, std::bind(&DecipherNode::topic_callback, this, _1));
    }

  private:
    void topic_callback(const cipher_interfaces::msg::CipherMessage & msg) const
    {
      std::string encrypted = msg.message;
      int8_t key = msg.key;
      
      // Reference for decryption logic - https://www.youtube.com/watch?v=kY0U1mFmwKE
      std::string decrypted = encrypted;
      
      for (auto i = 0u; i < encrypted.size(); i++) {
      	if (encrypted[i] == 32) { 
      		continue;
      	}
      	else {
      		if ((encrypted[i] - key) < 97 && (encrypted[i] - key) > 90) {
      			int temp = (encrypted[i]  - key) + 26;
      	                decrypted[i] = temp;
      	        }
      		else if ((encrypted[i] - key) < 65) {
      			int temp = (encrypted[i] - key) + 26;
      			decrypted[i] = temp;
      		}
      		else { 
      			decrypted[i] = encrypted[i] - key;
      		}
      	}  
      }  
      
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Decrypted Message: %s.", decrypted.c_str());  
      
      std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("check_answer_client");  
      rclcpp::Client<cipher_interfaces::srv::CipherAnswer>::SharedPtr client =                
      	node->create_client<cipher_interfaces::srv::CipherAnswer>(this->get_parameter("service_name").as_string());      

      auto request = std::make_shared<cipher_interfaces::srv::CipherAnswer::Request>();       
      request->answer = decrypted;                                                          

      while (!client->wait_for_service(1s)) {
    	if (!rclcpp::ok()) {
      		RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      		rclcpp::shutdown();
      		return;
    	}
    		RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  	}

      auto result = client->async_send_request(request);
      if (rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS)
      {
  	if (result.get()->result) { 
  		RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "The decrypted message was correct!");
  	}
  	else {
  		RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "The decrypted message was incorrect :(");
  	}
  	rclcpp::shutdown();
      } 
      else {
    	RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service.");   
    	rclcpp::shutdown();
      }
      
    }
    rclcpp::Subscription<cipher_interfaces::msg::CipherMessage>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<DecipherNode>());
  rclcpp::shutdown();
  return 0;
}
