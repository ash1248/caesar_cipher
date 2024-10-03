// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cipher_interfaces:srv/CipherAnswer.idl
// generated code does not contain a copyright notice

#ifndef CIPHER_INTERFACES__SRV__DETAIL__CIPHER_ANSWER__TRAITS_HPP_
#define CIPHER_INTERFACES__SRV__DETAIL__CIPHER_ANSWER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cipher_interfaces/srv/detail/cipher_answer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace cipher_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CipherAnswer_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: answer
  {
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CipherAnswer_Request & msg,
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

  // member: answer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CipherAnswer_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cipher_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cipher_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cipher_interfaces::srv::CipherAnswer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cipher_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cipher_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const cipher_interfaces::srv::CipherAnswer_Request & msg)
{
  return cipher_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cipher_interfaces::srv::CipherAnswer_Request>()
{
  return "cipher_interfaces::srv::CipherAnswer_Request";
}

template<>
inline const char * name<cipher_interfaces::srv::CipherAnswer_Request>()
{
  return "cipher_interfaces/srv/CipherAnswer_Request";
}

template<>
struct has_fixed_size<cipher_interfaces::srv::CipherAnswer_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cipher_interfaces::srv::CipherAnswer_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cipher_interfaces::srv::CipherAnswer_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cipher_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CipherAnswer_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CipherAnswer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CipherAnswer_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cipher_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cipher_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cipher_interfaces::srv::CipherAnswer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cipher_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cipher_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const cipher_interfaces::srv::CipherAnswer_Response & msg)
{
  return cipher_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cipher_interfaces::srv::CipherAnswer_Response>()
{
  return "cipher_interfaces::srv::CipherAnswer_Response";
}

template<>
inline const char * name<cipher_interfaces::srv::CipherAnswer_Response>()
{
  return "cipher_interfaces/srv/CipherAnswer_Response";
}

template<>
struct has_fixed_size<cipher_interfaces::srv::CipherAnswer_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cipher_interfaces::srv::CipherAnswer_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cipher_interfaces::srv::CipherAnswer_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cipher_interfaces::srv::CipherAnswer>()
{
  return "cipher_interfaces::srv::CipherAnswer";
}

template<>
inline const char * name<cipher_interfaces::srv::CipherAnswer>()
{
  return "cipher_interfaces/srv/CipherAnswer";
}

template<>
struct has_fixed_size<cipher_interfaces::srv::CipherAnswer>
  : std::integral_constant<
    bool,
    has_fixed_size<cipher_interfaces::srv::CipherAnswer_Request>::value &&
    has_fixed_size<cipher_interfaces::srv::CipherAnswer_Response>::value
  >
{
};

template<>
struct has_bounded_size<cipher_interfaces::srv::CipherAnswer>
  : std::integral_constant<
    bool,
    has_bounded_size<cipher_interfaces::srv::CipherAnswer_Request>::value &&
    has_bounded_size<cipher_interfaces::srv::CipherAnswer_Response>::value
  >
{
};

template<>
struct is_service<cipher_interfaces::srv::CipherAnswer>
  : std::true_type
{
};

template<>
struct is_service_request<cipher_interfaces::srv::CipherAnswer_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cipher_interfaces::srv::CipherAnswer_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CIPHER_INTERFACES__SRV__DETAIL__CIPHER_ANSWER__TRAITS_HPP_
