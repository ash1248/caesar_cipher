// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cipher_interfaces:msg/CipherMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cipher_interfaces/msg/detail/cipher_message__rosidl_typesupport_introspection_c.h"
#include "cipher_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cipher_interfaces/msg/detail/cipher_message__functions.h"
#include "cipher_interfaces/msg/detail/cipher_message__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cipher_interfaces__msg__CipherMessage__rosidl_typesupport_introspection_c__CipherMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cipher_interfaces__msg__CipherMessage__init(message_memory);
}

void cipher_interfaces__msg__CipherMessage__rosidl_typesupport_introspection_c__CipherMessage_fini_function(void * message_memory)
{
  cipher_interfaces__msg__CipherMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cipher_interfaces__msg__CipherMessage__rosidl_typesupport_introspection_c__CipherMessage_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cipher_interfaces__msg__CipherMessage, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cipher_interfaces__msg__CipherMessage, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cipher_interfaces__msg__CipherMessage, key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cipher_interfaces__msg__CipherMessage__rosidl_typesupport_introspection_c__CipherMessage_message_members = {
  "cipher_interfaces__msg",  // message namespace
  "CipherMessage",  // message name
  3,  // number of fields
  sizeof(cipher_interfaces__msg__CipherMessage),
  cipher_interfaces__msg__CipherMessage__rosidl_typesupport_introspection_c__CipherMessage_message_member_array,  // message members
  cipher_interfaces__msg__CipherMessage__rosidl_typesupport_introspection_c__CipherMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  cipher_interfaces__msg__CipherMessage__rosidl_typesupport_introspection_c__CipherMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cipher_interfaces__msg__CipherMessage__rosidl_typesupport_introspection_c__CipherMessage_message_type_support_handle = {
  0,
  &cipher_interfaces__msg__CipherMessage__rosidl_typesupport_introspection_c__CipherMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cipher_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cipher_interfaces, msg, CipherMessage)() {
  cipher_interfaces__msg__CipherMessage__rosidl_typesupport_introspection_c__CipherMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!cipher_interfaces__msg__CipherMessage__rosidl_typesupport_introspection_c__CipherMessage_message_type_support_handle.typesupport_identifier) {
    cipher_interfaces__msg__CipherMessage__rosidl_typesupport_introspection_c__CipherMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cipher_interfaces__msg__CipherMessage__rosidl_typesupport_introspection_c__CipherMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
