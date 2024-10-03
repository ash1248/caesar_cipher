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
      
      client_ = this->create_client<cipher_interfaces::srv::CipherAnswer>("check_answer");
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
      RCLCPP_INFO(this->get_logger(), "Decrypted Message: %s", decrypted.c_str());
      auto request = std::make_shared<cipher_interfaces::srv::CipherAnswer::Request>();
      request->answer = "xyxbc";
      
      auto result_future = client_->async_send_request(request);
      
      if (rclcpp::spin_until_future_complete(this->node, result_future) 
	    != rclcpp::FutureReturnCode::SUCCESS)
	{
	  RCLCPP_ERROR(this->get_logger(), "Failed");
	}
      else {
      auto result = result_future.get()->result;
    	    if (result == true) {
    		RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "The decrypted message is correct.");	
    	    }
    	    else {
    		RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "The decrypted message is incorrect.");	
   }
      RCLCPP_ERROR(this->get_logger(), "Service call timed out.");
    }
      }
    
    rclcpp::Subscription<cipher_interfaces::msg::CipherMessage>::SharedPtr subscription_;
    rclcpp::Client<cipher_interfaces::srv::CipherAnswer>::SharedPtr client_;
   
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<DecipherNode>());
  rclcpp::shutdown();
  return 0;
}
