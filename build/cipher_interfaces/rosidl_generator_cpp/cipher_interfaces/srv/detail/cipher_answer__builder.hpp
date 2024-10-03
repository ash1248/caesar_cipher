// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cipher_interfaces:srv/CipherAnswer.idl
// generated code does not contain a copyright notice

#ifndef CIPHER_INTERFACES__SRV__DETAIL__CIPHER_ANSWER__BUILDER_HPP_
#define CIPHER_INTERFACES__SRV__DETAIL__CIPHER_ANSWER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cipher_interfaces/srv/detail/cipher_answer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cipher_interfaces
{

namespace srv
{

namespace builder
{

class Init_CipherAnswer_Request_answer
{
public:
  explicit Init_CipherAnswer_Request_answer(::cipher_interfaces::srv::CipherAnswer_Request & msg)
  : msg_(msg)
  {}
  ::cipher_interfaces::srv::CipherAnswer_Request answer(::cipher_interfaces::srv::CipherAnswer_Request::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cipher_interfaces::srv::CipherAnswer_Request msg_;
};

class Init_CipherAnswer_Request_header
{
public:
  Init_CipherAnswer_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CipherAnswer_Request_answer header(::cipher_interfaces::srv::CipherAnswer_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CipherAnswer_Request_answer(msg_);
  }

private:
  ::cipher_interfaces::srv::CipherAnswer_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cipher_interfaces::srv::CipherAnswer_Request>()
{
  return cipher_interfaces::srv::builder::Init_CipherAnswer_Request_header();
}

}  // namespace cipher_interfaces


namespace cipher_interfaces
{

namespace srv
{

namespace builder
{

class Init_CipherAnswer_Response_result
{
public:
  Init_CipherAnswer_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cipher_interfaces::srv::CipherAnswer_Response result(::cipher_interfaces::srv::CipherAnswer_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cipher_interfaces::srv::CipherAnswer_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cipher_interfaces::srv::CipherAnswer_Response>()
{
  return cipher_interfaces::srv::builder::Init_CipherAnswer_Response_result();
}

}  // namespace cipher_interfaces

#endif  // CIPHER_INTERFACES__SRV__DETAIL__CIPHER_ANSWER__BUILDER_HPP_
