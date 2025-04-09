// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from messages_fr3:msg/JointEEState.idl
// generated code does not contain a copyright notice
#include "messages_fr3/msg/detail/joint_ee_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
messages_fr3__msg__JointEEState__init(messages_fr3__msg__JointEEState * msg)
{
  if (!msg) {
    return false;
  }
  // jointzacceleration
  return true;
}

void
messages_fr3__msg__JointEEState__fini(messages_fr3__msg__JointEEState * msg)
{
  if (!msg) {
    return;
  }
  // jointzacceleration
}

bool
messages_fr3__msg__JointEEState__are_equal(const messages_fr3__msg__JointEEState * lhs, const messages_fr3__msg__JointEEState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // jointzacceleration
  if (lhs->jointzacceleration != rhs->jointzacceleration) {
    return false;
  }
  return true;
}

bool
messages_fr3__msg__JointEEState__copy(
  const messages_fr3__msg__JointEEState * input,
  messages_fr3__msg__JointEEState * output)
{
  if (!input || !output) {
    return false;
  }
  // jointzacceleration
  output->jointzacceleration = input->jointzacceleration;
  return true;
}

messages_fr3__msg__JointEEState *
messages_fr3__msg__JointEEState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages_fr3__msg__JointEEState * msg = (messages_fr3__msg__JointEEState *)allocator.allocate(sizeof(messages_fr3__msg__JointEEState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_fr3__msg__JointEEState));
  bool success = messages_fr3__msg__JointEEState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
messages_fr3__msg__JointEEState__destroy(messages_fr3__msg__JointEEState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    messages_fr3__msg__JointEEState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
messages_fr3__msg__JointEEState__Sequence__init(messages_fr3__msg__JointEEState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages_fr3__msg__JointEEState * data = NULL;

  if (size) {
    data = (messages_fr3__msg__JointEEState *)allocator.zero_allocate(size, sizeof(messages_fr3__msg__JointEEState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_fr3__msg__JointEEState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_fr3__msg__JointEEState__fini(&data[i - 1]);
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
messages_fr3__msg__JointEEState__Sequence__fini(messages_fr3__msg__JointEEState__Sequence * array)
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
      messages_fr3__msg__JointEEState__fini(&array->data[i]);
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

messages_fr3__msg__JointEEState__Sequence *
messages_fr3__msg__JointEEState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages_fr3__msg__JointEEState__Sequence * array = (messages_fr3__msg__JointEEState__Sequence *)allocator.allocate(sizeof(messages_fr3__msg__JointEEState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = messages_fr3__msg__JointEEState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
messages_fr3__msg__JointEEState__Sequence__destroy(messages_fr3__msg__JointEEState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    messages_fr3__msg__JointEEState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
messages_fr3__msg__JointEEState__Sequence__are_equal(const messages_fr3__msg__JointEEState__Sequence * lhs, const messages_fr3__msg__JointEEState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!messages_fr3__msg__JointEEState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
messages_fr3__msg__JointEEState__Sequence__copy(
  const messages_fr3__msg__JointEEState__Sequence * input,
  messages_fr3__msg__JointEEState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(messages_fr3__msg__JointEEState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    messages_fr3__msg__JointEEState * data =
      (messages_fr3__msg__JointEEState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!messages_fr3__msg__JointEEState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          messages_fr3__msg__JointEEState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!messages_fr3__msg__JointEEState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
