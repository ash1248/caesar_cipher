#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "cipher_interfaces/msg/cipher_message.hpp"                                            // CHANGE

using namespace std::chrono_literals;

class MinimalPublisher : public rclcpp::Node
{
public:
  MinimalPublisher()
  : Node("minimal_publisher"), count_(0)
  {
    publisher_ = this->create_publisher<cipher_interfaces::msg::CipherMessage>("topic", 10);  // CHANGE
    timer_ = this->create_wall_timer(
      500ms, std::bind(&MinimalPublisher::timer_callback, this));
  }

private:
  void timer_callback()
  {
    auto message = cipher_interfaces::msg::CipherMessage();                                   // CHANGE
    message.message = "abcdefghi";   
    message.key = 3;                                                  // CHANGE
    RCLCPP_INFO_STREAM(this->get_logger(), "Publishing: '" << message.message << "'" << " Key: " << message.key);    
    publisher_->publish(message);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<cipher_interfaces::msg::CipherMessage>::SharedPtr publisher_;             // CHANGE
  size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}
