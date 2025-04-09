// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from messages_fr3:msg/PoseDirection.idl
// generated code does not contain a copyright notice
#include "messages_fr3/msg/detail/pose_direction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
messages_fr3__msg__PoseDirection__init(messages_fr3__msg__PoseDirection * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // roll
  // pitch
  // yaw
  // directionx
  // directiony
  // directionz
  return true;
}

void
messages_fr3__msg__PoseDirection__fini(messages_fr3__msg__PoseDirection * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // roll
  // pitch
  // yaw
  // directionx
  // directiony
  // directionz
}

bool
messages_fr3__msg__PoseDirection__are_equal(const messages_fr3__msg__PoseDirection * lhs, const messages_fr3__msg__PoseDirection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // directionx
  if (lhs->directionx != rhs->directionx) {
    return false;
  }
  // directiony
  if (lhs->directiony != rhs->directiony) {
    return false;
  }
  // directionz
  if (lhs->directionz != rhs->directionz) {
    return false;
  }
  return true;
}

bool
messages_fr3__msg__PoseDirection__copy(
  const messages_fr3__msg__PoseDirection * input,
  messages_fr3__msg__PoseDirection * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // directionx
  output->directionx = input->directionx;
  // directiony
  output->directiony = input->directiony;
  // directionz
  output->directionz = input->directionz;
  return true;
}

messages_fr3__msg__PoseDirection *
messages_fr3__msg__PoseDirection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages_fr3__msg__PoseDirection * msg = (messages_fr3__msg__PoseDirection *)allocator.allocate(sizeof(messages_fr3__msg__PoseDirection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_fr3__msg__PoseDirection));
  bool success = messages_fr3__msg__PoseDirection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
messages_fr3__msg__PoseDirection__destroy(messages_fr3__msg__PoseDirection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    messages_fr3__msg__PoseDirection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
messages_fr3__msg__PoseDirection__Sequence__init(messages_fr3__msg__PoseDirection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages_fr3__msg__PoseDirection * data = NULL;

  if (size) {
    data = (messages_fr3__msg__PoseDirection *)allocator.zero_allocate(size, sizeof(messages_fr3__msg__PoseDirection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_fr3__msg__PoseDirection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_fr3__msg__PoseDirection__fini(&data[i - 1]);
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
messages_fr3__msg__PoseDirection__Sequence__fini(messages_fr3__msg__PoseDirection__Sequence * array)
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
      messages_fr3__msg__PoseDirection__fini(&array->data[i]);
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

messages_fr3__msg__PoseDirection__Sequence *
messages_fr3__msg__PoseDirection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages_fr3__msg__PoseDirection__Sequence * array = (messages_fr3__msg__PoseDirection__Sequence *)allocator.allocate(sizeof(messages_fr3__msg__PoseDirection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = messages_fr3__msg__PoseDirection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
messages_fr3__msg__PoseDirection__Sequence__destroy(messages_fr3__msg__PoseDirection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    messages_fr3__msg__PoseDirection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
messages_fr3__msg__PoseDirection__Sequence__are_equal(const messages_fr3__msg__PoseDirection__Sequence * lhs, const messages_fr3__msg__PoseDirection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!messages_fr3__msg__PoseDirection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
messages_fr3__msg__PoseDirection__Sequence__copy(
  const messages_fr3__msg__PoseDirection__Sequence * input,
  messages_fr3__msg__PoseDirection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(messages_fr3__msg__PoseDirection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    messages_fr3__msg__PoseDirection * data =
      (messages_fr3__msg__PoseDirection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!messages_fr3__msg__PoseDirection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          messages_fr3__msg__PoseDirection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!messages_fr3__msg__PoseDirection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
