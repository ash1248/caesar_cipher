#include "rclcpp/rclcpp.hpp"
#include "cipher_interfaces/srv/cipher_answer.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);


  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("check_answer_client");  // CHANGE
  rclcpp::Client<cipher_interfaces::srv::CipherAnswer>::SharedPtr client =                // CHANGE
    node->create_client<cipher_interfaces::srv::CipherAnswer>("check_answer");          // CHANGE

  auto request = std::make_shared<cipher_interfaces::srv::CipherAnswer::Request>();       // CHANGE
  request->answer = "abcdef";                                                          // CHANGE

  while (!client->wait_for_service(10s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Result : %d", result.get()->result);
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service check_answer");    // CHANGE
  }

  rclcpp::shutdown();
  return 0;
}
