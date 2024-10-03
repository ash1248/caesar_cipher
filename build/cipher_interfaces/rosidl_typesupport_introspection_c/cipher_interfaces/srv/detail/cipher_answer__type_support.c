// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cipher_interfaces:srv/CipherAnswer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cipher_interfaces/srv/detail/cipher_answer__rosidl_typesupport_introspection_c.h"
#include "cipher_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cipher_interfaces/srv/detail/cipher_answer__functions.h"
#include "cipher_interfaces/srv/detail/cipher_answer__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `answer`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cipher_interfaces__srv__CipherAnswer_Request__rosidl_typesupport_introspection_c__CipherAnswer_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cipher_interfaces__srv__CipherAnswer_Request__init(message_memory);
}

void cipher_interfaces__srv__CipherAnswer_Request__rosidl_typesupport_introspection_c__CipherAnswer_Request_fini_function(void * message_memory)
{
  cipher_interfaces__srv__CipherAnswer_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cipher_interfaces__srv__CipherAnswer_Request__rosidl_typesupport_introspection_c__CipherAnswer_Request_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cipher_interfaces__srv__CipherAnswer_Request, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "answer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cipher_interfaces__srv__CipherAnswer_Request, answer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cipher_interfaces__srv__CipherAnswer_Request__rosidl_typesupport_introspection_c__CipherAnswer_Request_message_members = {
  "cipher_interfaces__srv",  // message namespace
  "CipherAnswer_Request",  // message name
  2,  // number of fields
  sizeof(cipher_interfaces__srv__CipherAnswer_Request),
  cipher_interfaces__srv__CipherAnswer_Request__rosidl_typesupport_introspection_c__CipherAnswer_Request_message_member_array,  // message members
  cipher_interfaces__srv__CipherAnswer_Request__rosidl_typesupport_introspection_c__CipherAnswer_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cipher_interfaces__srv__CipherAnswer_Request__rosidl_typesupport_introspection_c__CipherAnswer_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cipher_interfaces__srv__CipherAnswer_Request__rosidl_typesupport_introspection_c__CipherAnswer_Request_message_type_support_handle = {
  0,
  &cipher_interfaces__srv__CipherAnswer_Request__rosidl_typesupport_introspection_c__CipherAnswer_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cipher_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cipher_interfaces, srv, CipherAnswer_Request)() {
  cipher_interfaces__srv__CipherAnswer_Request__rosidl_typesupport_introspection_c__CipherAnswer_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!cipher_interfaces__srv__CipherAnswer_Request__rosidl_typesupport_introspection_c__CipherAnswer_Request_message_type_support_handle.typesupport_identifier) {
    cipher_interfaces__srv__CipherAnswer_Request__rosidl_typesupport_introspection_c__CipherAnswer_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cipher_interfaces__srv__CipherAnswer_Request__rosidl_typesupport_introspection_c__CipherAnswer_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cipher_interfaces/srv/detail/cipher_answer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cipher_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cipher_interfaces/srv/detail/cipher_answer__functions.h"
// already included above
// #include "cipher_interfaces/srv/detail/cipher_answer__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void cipher_interfaces__srv__CipherAnswer_Response__rosidl_typesupport_introspection_c__CipherAnswer_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cipher_interfaces__srv__CipherAnswer_Response__init(message_memory);
}

void cipher_interfaces__srv__CipherAnswer_Response__rosidl_typesupport_introspection_c__CipherAnswer_Response_fini_function(void * message_memory)
{
  cipher_interfaces__srv__CipherAnswer_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cipher_interfaces__srv__CipherAnswer_Response__rosidl_typesupport_introspection_c__CipherAnswer_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cipher_interfaces__srv__CipherAnswer_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cipher_interfaces__srv__CipherAnswer_Response__rosidl_typesupport_introspection_c__CipherAnswer_Response_message_members = {
  "cipher_interfaces__srv",  // message namespace
  "CipherAnswer_Response",  // message name
  1,  // number of fields
  sizeof(cipher_interfaces__srv__CipherAnswer_Response),
  cipher_interfaces__srv__CipherAnswer_Response__rosidl_typesupport_introspection_c__CipherAnswer_Response_message_member_array,  // message members
  cipher_interfaces__srv__CipherAnswer_Response__rosidl_typesupport_introspection_c__CipherAnswer_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cipher_interfaces__srv__CipherAnswer_Response__rosidl_typesupport_introspection_c__CipherAnswer_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cipher_interfaces__srv__CipherAnswer_Response__rosidl_typesupport_introspection_c__CipherAnswer_Response_message_type_support_handle = {
  0,
  &cipher_interfaces__srv__CipherAnswer_Response__rosidl_typesupport_introspection_c__CipherAnswer_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cipher_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cipher_interfaces, srv, CipherAnswer_Response)() {
  if (!cipher_interfaces__srv__CipherAnswer_Response__rosidl_typesupport_introspection_c__CipherAnswer_Response_message_type_support_handle.typesupport_identifier) {
    cipher_interfaces__srv__CipherAnswer_Response__rosidl_typesupport_introspection_c__CipherAnswer_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cipher_interfaces__srv__CipherAnswer_Response__rosidl_typesupport_introspection_c__CipherAnswer_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cipher_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cipher_interfaces/srv/detail/cipher_answer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cipher_interfaces__srv__detail__cipher_answer__rosidl_typesupport_introspection_c__CipherAnswer_service_members = {
  "cipher_interfaces__srv",  // service namespace
  "CipherAnswer",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cipher_interfaces__srv__detail__cipher_answer__rosidl_typesupport_introspection_c__CipherAnswer_Request_message_type_support_handle,
  NULL  // response message
  // cipher_interfaces__srv__detail__cipher_answer__rosidl_typesupport_introspection_c__CipherAnswer_Response_message_type_support_handle
};

static rosidl_service_type_support_t cipher_interfaces__srv__detail__cipher_answer__rosidl_typesupport_introspection_c__CipherAnswer_service_type_support_handle = {
  0,
  &cipher_interfaces__srv__detail__cipher_answer__rosidl_typesupport_introspection_c__CipherAnswer_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cipher_interfaces, srv, CipherAnswer_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cipher_interfaces, srv, CipherAnswer_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cipher_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cipher_interfaces, srv, CipherAnswer)() {
  if (!cipher_interfaces__srv__detail__cipher_answer__rosidl_typesupport_introspection_c__CipherAnswer_service_type_support_handle.typesupport_identifier) {
    cipher_interfaces__srv__detail__cipher_answer__rosidl_typesupport_introspection_c__CipherAnswer_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cipher_interfaces__srv__detail__cipher_answer__rosidl_typesupport_introspection_c__CipherAnswer_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cipher_interfaces, srv, CipherAnswer_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cipher_interfaces, srv, CipherAnswer_Response)()->data;
  }

  return &cipher_interfaces__srv__detail__cipher_answer__rosidl_typesupport_introspection_c__CipherAnswer_service_type_support_handle;
}
