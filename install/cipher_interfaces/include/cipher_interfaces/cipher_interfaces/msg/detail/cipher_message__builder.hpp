// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cipher_interfaces:msg/CipherMessage.idl
// generated code does not contain a copyright notice

#ifndef CIPHER_INTERFACES__MSG__DETAIL__CIPHER_MESSAGE__BUILDER_HPP_
#define CIPHER_INTERFACES__MSG__DETAIL__CIPHER_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cipher_interfaces/msg/detail/cipher_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cipher_interfaces
{

namespace msg
{

namespace builder
{

class Init_CipherMessage_key
{
public:
  explicit Init_CipherMessage_key(::cipher_interfaces::msg::CipherMessage & msg)
  : msg_(msg)
  {}
  ::cipher_interfaces::msg::CipherMessage key(::cipher_interfaces::msg::CipherMessage::_key_type arg)
  {
    msg_.key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cipher_interfaces::msg::CipherMessage msg_;
};

class Init_CipherMessage_message
{
public:
  explicit Init_CipherMessage_message(::cipher_interfaces::msg::CipherMessage & msg)
  : msg_(msg)
  {}
  Init_CipherMessage_key message(::cipher_interfaces::msg::CipherMessage::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CipherMessage_key(msg_);
  }

private:
  ::cipher_interfaces::msg::CipherMessage msg_;
};

class Init_CipherMessage_header
{
public:
  Init_CipherMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CipherMessage_message header(::cipher_interfaces::msg::CipherMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CipherMessage_message(msg_);
  }

private:
  ::cipher_interfaces::msg::CipherMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cipher_interfaces::msg::CipherMessage>()
{
  return cipher_interfaces::msg::builder::Init_CipherMessage_header();
}

}  // namespace cipher_interfaces

#endif  // CIPHER_INTERFACES__MSG__DETAIL__CIPHER_MESSAGE__BUILDER_HPP_
