// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cipher_interfaces:srv/CipherAnswer.idl
// generated code does not contain a copyright notice

#ifndef CIPHER_INTERFACES__SRV__DETAIL__CIPHER_ANSWER__STRUCT_HPP_
#define CIPHER_INTERFACES__SRV__DETAIL__CIPHER_ANSWER__STRUCT_HPP_

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
# define DEPRECATED__cipher_interfaces__srv__CipherAnswer_Request __attribute__((deprecated))
#else
# define DEPRECATED__cipher_interfaces__srv__CipherAnswer_Request __declspec(deprecated)
#endif

namespace cipher_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CipherAnswer_Request_
{
  using Type = CipherAnswer_Request_<ContainerAllocator>;

  explicit CipherAnswer_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = "";
    }
  }

  explicit CipherAnswer_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    answer(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _answer_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _answer_type answer;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__answer(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->answer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cipher_interfaces::srv::CipherAnswer_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cipher_interfaces::srv::CipherAnswer_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cipher_interfaces::srv::CipherAnswer_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cipher_interfaces::srv::CipherAnswer_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cipher_interfaces::srv::CipherAnswer_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cipher_interfaces::srv::CipherAnswer_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cipher_interfaces::srv::CipherAnswer_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cipher_interfaces::srv::CipherAnswer_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cipher_interfaces::srv::CipherAnswer_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cipher_interfaces::srv::CipherAnswer_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cipher_interfaces__srv__CipherAnswer_Request
    std::shared_ptr<cipher_interfaces::srv::CipherAnswer_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cipher_interfaces__srv__CipherAnswer_Request
    std::shared_ptr<cipher_interfaces::srv::CipherAnswer_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CipherAnswer_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->answer != other.answer) {
      return false;
    }
    return true;
  }
  bool operator!=(const CipherAnswer_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CipherAnswer_Request_

// alias to use template instance with default allocator
using CipherAnswer_Request =
  cipher_interfaces::srv::CipherAnswer_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cipher_interfaces


#ifndef _WIN32
# define DEPRECATED__cipher_interfaces__srv__CipherAnswer_Response __attribute__((deprecated))
#else
# define DEPRECATED__cipher_interfaces__srv__CipherAnswer_Response __declspec(deprecated)
#endif

namespace cipher_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CipherAnswer_Response_
{
  using Type = CipherAnswer_Response_<ContainerAllocator>;

  explicit CipherAnswer_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit CipherAnswer_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cipher_interfaces::srv::CipherAnswer_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cipher_interfaces::srv::CipherAnswer_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cipher_interfaces::srv::CipherAnswer_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cipher_interfaces::srv::CipherAnswer_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cipher_interfaces::srv::CipherAnswer_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cipher_interfaces::srv::CipherAnswer_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cipher_interfaces::srv::CipherAnswer_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cipher_interfaces::srv::CipherAnswer_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cipher_interfaces::srv::CipherAnswer_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cipher_interfaces::srv::CipherAnswer_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cipher_interfaces__srv__CipherAnswer_Response
    std::shared_ptr<cipher_interfaces::srv::CipherAnswer_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cipher_interfaces__srv__CipherAnswer_Response
    std::shared_ptr<cipher_interfaces::srv::CipherAnswer_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CipherAnswer_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CipherAnswer_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CipherAnswer_Response_

// alias to use template instance with default allocator
using CipherAnswer_Response =
  cipher_interfaces::srv::CipherAnswer_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cipher_interfaces

namespace cipher_interfaces
{

namespace srv
{

struct CipherAnswer
{
  using Request = cipher_interfaces::srv::CipherAnswer_Request;
  using Response = cipher_interfaces::srv::CipherAnswer_Response;
};

}  // namespace srv

}  // namespace cipher_interfaces

#endif  // CIPHER_INTERFACES__SRV__DETAIL__CIPHER_ANSWER__STRUCT_HPP_
