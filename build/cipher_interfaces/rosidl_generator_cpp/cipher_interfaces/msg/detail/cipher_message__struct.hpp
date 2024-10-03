// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cipher_interfaces:msg/CipherMessage.idl
// generated code does not contain a copyright notice

#ifndef CIPHER_INTERFACES__MSG__DETAIL__CIPHER_MESSAGE__STRUCT_HPP_
#define CIPHER_INTERFACES__MSG__DETAIL__CIPHER_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cipher_interfaces__msg__CipherMessage __attribute__((deprecated))
#else
# define DEPRECATED__cipher_interfaces__msg__CipherMessage __declspec(deprecated)
#endif

namespace cipher_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CipherMessage_
{
  using Type = CipherMessage_<ContainerAllocator>;

  explicit CipherMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->key = 0;
    }
  }

  explicit CipherMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->key = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _key_type =
    int8_t;
  _key_type key;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__key(
    const int8_t & _arg)
  {
    this->key = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cipher_interfaces::msg::CipherMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const cipher_interfaces::msg::CipherMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cipher_interfaces::msg::CipherMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cipher_interfaces::msg::CipherMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cipher_interfaces::msg::CipherMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cipher_interfaces::msg::CipherMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cipher_interfaces::msg::CipherMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cipher_interfaces::msg::CipherMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cipher_interfaces::msg::CipherMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cipher_interfaces::msg::CipherMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cipher_interfaces__msg__CipherMessage
    std::shared_ptr<cipher_interfaces::msg::CipherMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cipher_interfaces__msg__CipherMessage
    std::shared_ptr<cipher_interfaces::msg::CipherMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CipherMessage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->key != other.key) {
      return false;
    }
    return true;
  }
  bool operator!=(const CipherMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CipherMessage_

// alias to use template instance with default allocator
using CipherMessage =
  cipher_interfaces::msg::CipherMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cipher_interfaces

#endif  // CIPHER_INTERFACES__MSG__DETAIL__CIPHER_MESSAGE__STRUCT_HPP_
