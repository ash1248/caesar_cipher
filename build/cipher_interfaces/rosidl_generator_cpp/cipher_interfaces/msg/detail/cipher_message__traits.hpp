// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cipher_interfaces:msg/CipherMessage.idl
// generated code does not contain a copyright notice

#ifndef CIPHER_INTERFACES__MSG__DETAIL__CIPHER_MESSAGE__TRAITS_HPP_
#define CIPHER_INTERFACES__MSG__DETAIL__CIPHER_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cipher_interfaces/msg/detail/cipher_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace cipher_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CipherMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CipherMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CipherMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cipher_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cipher_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cipher_interfaces::msg::CipherMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  cipher_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cipher_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const cipher_interfaces::msg::CipherMessage & msg)
{
  return cipher_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cipher_interfaces::msg::CipherMessage>()
{
  return "cipher_interfaces::msg::CipherMessage";
}

template<>
inline const char * name<cipher_interfaces::msg::CipherMessage>()
{
  return "cipher_interfaces/msg/CipherMessage";
}

template<>
struct has_fixed_size<cipher_interfaces::msg::CipherMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cipher_interfaces::msg::CipherMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cipher_interfaces::msg::CipherMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CIPHER_INTERFACES__MSG__DETAIL__CIPHER_MESSAGE__TRAITS_HPP_
