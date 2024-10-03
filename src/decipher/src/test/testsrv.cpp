#include "rclcpp/rclcpp.hpp"
#include "cipher_interfaces/srv/cipher_answer.hpp"                                        // CHANGE

#include <memory>

void check(const std::shared_ptr<cipher_interfaces::srv::CipherAnswer::Request> request,     // CHANGE
          std::shared_ptr<cipher_interfaces::srv::CipherAnswer::Response>       response)  // CHANGE
{
  response->result = true;                                    // CHANGE
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %s",  // CHANGE
                request->answer.c_str());                                         // CHANGE
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%d]", response->result);
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("check_answer_srv");   // CHANGE

  rclcpp::Service<cipher_interfaces::srv::CipherAnswer>::SharedPtr service =               // CHANGE
    node->create_service<cipher_interfaces::srv::CipherAnswer>("check_answer",  &check);   // CHANGE

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to verify answer.");                     // CHANGE

  rclcpp::spin(node);
  rclcpp::shutdown();
}	
