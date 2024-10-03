// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cipher_interfaces:msg/CipherMessage.idl
// generated code does not contain a copyright notice
#include "cipher_interfaces/msg/detail/cipher_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
cipher_interfaces__msg__CipherMessage__init(cipher_interfaces__msg__CipherMessage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cipher_interfaces__msg__CipherMessage__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    cipher_interfaces__msg__CipherMessage__fini(msg);
    return false;
  }
  // key
  return true;
}

void
cipher_interfaces__msg__CipherMessage__fini(cipher_interfaces__msg__CipherMessage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // key
}

bool
cipher_interfaces__msg__CipherMessage__are_equal(const cipher_interfaces__msg__CipherMessage * lhs, const cipher_interfaces__msg__CipherMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // key
  if (lhs->key != rhs->key) {
    return false;
  }
  return true;
}

bool
cipher_interfaces__msg__CipherMessage__copy(
  const cipher_interfaces__msg__CipherMessage * input,
  cipher_interfaces__msg__CipherMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // key
  output->key = input->key;
  return true;
}

cipher_interfaces__msg__CipherMessage *
cipher_interfaces__msg__CipherMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cipher_interfaces__msg__CipherMessage * msg = (cipher_interfaces__msg__CipherMessage *)allocator.allocate(sizeof(cipher_interfaces__msg__CipherMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cipher_interfaces__msg__CipherMessage));
  bool success = cipher_interfaces__msg__CipherMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cipher_interfaces__msg__CipherMessage__destroy(cipher_interfaces__msg__CipherMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cipher_interfaces__msg__CipherMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cipher_interfaces__msg__CipherMessage__Sequence__init(cipher_interfaces__msg__CipherMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cipher_interfaces__msg__CipherMessage * data = NULL;

  if (size) {
    data = (cipher_interfaces__msg__CipherMessage *)allocator.zero_allocate(size, sizeof(cipher_interfaces__msg__CipherMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cipher_interfaces__msg__CipherMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cipher_interfaces__msg__CipherMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cipher_interfaces__msg__CipherMessage__Sequence__fini(cipher_interfaces__msg__CipherMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cipher_interfaces__msg__CipherMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cipher_interfaces__msg__CipherMessage__Sequence *
cipher_interfaces__msg__CipherMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cipher_interfaces__msg__CipherMessage__Sequence * array = (cipher_interfaces__msg__CipherMessage__Sequence *)allocator.allocate(sizeof(cipher_interfaces__msg__CipherMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cipher_interfaces__msg__CipherMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cipher_interfaces__msg__CipherMessage__Sequence__destroy(cipher_interfaces__msg__CipherMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cipher_interfaces__msg__CipherMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cipher_interfaces__msg__CipherMessage__Sequence__are_equal(const cipher_interfaces__msg__CipherMessage__Sequence * lhs, const cipher_interfaces__msg__CipherMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cipher_interfaces__msg__CipherMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cipher_interfaces__msg__CipherMessage__Sequence__copy(
  const cipher_interfaces__msg__CipherMessage__Sequence * input,
  cipher_interfaces__msg__CipherMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cipher_interfaces__msg__CipherMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cipher_interfaces__msg__CipherMessage * data =
      (cipher_interfaces__msg__CipherMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cipher_interfaces__msg__CipherMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cipher_interfaces__msg__CipherMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cipher_interfaces__msg__CipherMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
