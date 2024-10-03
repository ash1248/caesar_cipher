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
      subscription_ = this->create_subscription<cipher_interfaces::msg::CipherMessage>(
      "topic", 10, std::bind(&DecipherNode::topic_callback, this, _1));
      
      std::string get_last_received_message() const
    {
        return last_received_message_;
    }
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
	last_received_message_ = decrypted;
      
    }
    rclcpp::Subscription<cipher_interfaces::msg::CipherMessage>::SharedPtr subscription_;
     std::string last_received_message_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node1 = std::make_shared<DecipherNode>();
  rclcpp::spin(node1);
  
  std::string decrypted = node1->get_last_received_message();
  //node1.destroy_node();
  
  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("check_answer_client");  
      rclcpp::Client<cipher_interfaces::srv::CipherAnswer>::SharedPtr client =                
      	node->create_client<cipher_interfaces::srv::CipherAnswer>("check_answer");      

      auto request = std::make_shared<cipher_interfaces::srv::CipherAnswer::Request>();       
      request->answer = decrypted;                                                          

      while (!client->wait_for_service(1s)) {
    	if (!rclcpp::ok()) {
      		RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      		rclcpp::shutdown();
      		return 0;
    	}
    		RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  	}

  	auto result = client->async_send_request(request);
  	if (rclcpp::spin_until_future_complete(node, result) ==
    		rclcpp::FutureReturnCode::SUCCESS)
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
  	
  rclcpp::shutdown();
  return 0;
}
