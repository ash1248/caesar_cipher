// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cipher_interfaces:msg/CipherMessage.idl
// generated code does not contain a copyright notice

#ifndef CIPHER_INTERFACES__MSG__DETAIL__CIPHER_MESSAGE__STRUCT_H_
#define CIPHER_INTERFACES__MSG__DETAIL__CIPHER_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CipherMessage in the package cipher_interfaces.
typedef struct cipher_interfaces__msg__CipherMessage
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String message;
  int8_t key;
} cipher_interfaces__msg__CipherMessage;

// Struct for a sequence of cipher_interfaces__msg__CipherMessage.
typedef struct cipher_interfaces__msg__CipherMessage__Sequence
{
  cipher_interfaces__msg__CipherMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cipher_interfaces__msg__CipherMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CIPHER_INTERFACES__MSG__DETAIL__CIPHER_MESSAGE__STRUCT_H_
