// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from messages_fr3:srv/ControllerActivation.idl
// generated code does not contain a copyright notice
#include "messages_fr3/srv/detail/controller_activation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
messages_fr3__srv__ControllerActivation_Request__init(messages_fr3__srv__ControllerActivation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // controller_activation
  return true;
}

void
messages_fr3__srv__ControllerActivation_Request__fini(messages_fr3__srv__ControllerActivation_Request * msg)
{
  if (!msg) {
    return;
  }
  // controller_activation
}

bool
messages_fr3__srv__ControllerActivation_Request__are_equal(const messages_fr3__srv__ControllerActivation_Request * lhs, const messages_fr3__srv__ControllerActivation_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // controller_activation
  if (lhs->controller_activation != rhs->controller_activation) {
    return false;
  }
  return true;
}

bool
messages_fr3__srv__ControllerActivation_Request__copy(
  const messages_fr3__srv__ControllerActivation_Request * input,
  messages_fr3__srv__ControllerActivation_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // controller_activation
  output->controller_activation = input->controller_activation;
  return true;
}

messages_fr3__srv__ControllerActivation_Request *
messages_fr3__srv__ControllerActivation_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages_fr3__srv__ControllerActivation_Request * msg = (messages_fr3__srv__ControllerActivation_Request *)allocator.allocate(sizeof(messages_fr3__srv__ControllerActivation_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_fr3__srv__ControllerActivation_Request));
  bool success = messages_fr3__srv__ControllerActivation_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
messages_fr3__srv__ControllerActivation_Request__destroy(messages_fr3__srv__ControllerActivation_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    messages_fr3__srv__ControllerActivation_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
messages_fr3__srv__ControllerActivation_Request__Sequence__init(messages_fr3__srv__ControllerActivation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages_fr3__srv__ControllerActivation_Request * data = NULL;

  if (size) {
    data = (messages_fr3__srv__ControllerActivation_Request *)allocator.zero_allocate(size, sizeof(messages_fr3__srv__ControllerActivation_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_fr3__srv__ControllerActivation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_fr3__srv__ControllerActivation_Request__fini(&data[i - 1]);
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
messages_fr3__srv__ControllerActivation_Request__Sequence__fini(messages_fr3__srv__ControllerActivation_Request__Sequence * array)
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
      messages_fr3__srv__ControllerActivation_Request__fini(&array->data[i]);
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

messages_fr3__srv__ControllerActivation_Request__Sequence *
messages_fr3__srv__ControllerActivation_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages_fr3__srv__ControllerActivation_Request__Sequence * array = (messages_fr3__srv__ControllerActivation_Request__Sequence *)allocator.allocate(sizeof(messages_fr3__srv__ControllerActivation_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = messages_fr3__srv__ControllerActivation_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
messages_fr3__srv__ControllerActivation_Request__Sequence__destroy(messages_fr3__srv__ControllerActivation_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    messages_fr3__srv__ControllerActivation_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
messages_fr3__srv__ControllerActivation_Request__Sequence__are_equal(const messages_fr3__srv__ControllerActivation_Request__Sequence * lhs, const messages_fr3__srv__ControllerActivation_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!messages_fr3__srv__ControllerActivation_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
messages_fr3__srv__ControllerActivation_Request__Sequence__copy(
  const messages_fr3__srv__ControllerActivation_Request__Sequence * input,
  messages_fr3__srv__ControllerActivation_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(messages_fr3__srv__ControllerActivation_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    messages_fr3__srv__ControllerActivation_Request * data =
      (messages_fr3__srv__ControllerActivation_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!messages_fr3__srv__ControllerActivation_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          messages_fr3__srv__ControllerActivation_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!messages_fr3__srv__ControllerActivation_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
messages_fr3__srv__ControllerActivation_Response__init(messages_fr3__srv__ControllerActivation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
messages_fr3__srv__ControllerActivation_Response__fini(messages_fr3__srv__ControllerActivation_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
messages_fr3__srv__ControllerActivation_Response__are_equal(const messages_fr3__srv__ControllerActivation_Response * lhs, const messages_fr3__srv__ControllerActivation_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
messages_fr3__srv__ControllerActivation_Response__copy(
  const messages_fr3__srv__ControllerActivation_Response * input,
  messages_fr3__srv__ControllerActivation_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

messages_fr3__srv__ControllerActivation_Response *
messages_fr3__srv__ControllerActivation_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages_fr3__srv__ControllerActivation_Response * msg = (messages_fr3__srv__ControllerActivation_Response *)allocator.allocate(sizeof(messages_fr3__srv__ControllerActivation_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_fr3__srv__ControllerActivation_Response));
  bool success = messages_fr3__srv__ControllerActivation_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
messages_fr3__srv__ControllerActivation_Response__destroy(messages_fr3__srv__ControllerActivation_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    messages_fr3__srv__ControllerActivation_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
messages_fr3__srv__ControllerActivation_Response__Sequence__init(messages_fr3__srv__ControllerActivation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages_fr3__srv__ControllerActivation_Response * data = NULL;

  if (size) {
    data = (messages_fr3__srv__ControllerActivation_Response *)allocator.zero_allocate(size, sizeof(messages_fr3__srv__ControllerActivation_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_fr3__srv__ControllerActivation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_fr3__srv__ControllerActivation_Response__fini(&data[i - 1]);
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
messages_fr3__srv__ControllerActivation_Response__Sequence__fini(messages_fr3__srv__ControllerActivation_Response__Sequence * array)
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
      messages_fr3__srv__ControllerActivation_Response__fini(&array->data[i]);
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

messages_fr3__srv__ControllerActivation_Response__Sequence *
messages_fr3__srv__ControllerActivation_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages_fr3__srv__ControllerActivation_Response__Sequence * array = (messages_fr3__srv__ControllerActivation_Response__Sequence *)allocator.allocate(sizeof(messages_fr3__srv__ControllerActivation_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = messages_fr3__srv__ControllerActivation_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
messages_fr3__srv__ControllerActivation_Response__Sequence__destroy(messages_fr3__srv__ControllerActivation_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    messages_fr3__srv__ControllerActivation_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
messages_fr3__srv__ControllerActivation_Response__Sequence__are_equal(const messages_fr3__srv__ControllerActivation_Response__Sequence * lhs, const messages_fr3__srv__ControllerActivation_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!messages_fr3__srv__ControllerActivation_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
messages_fr3__srv__ControllerActivation_Response__Sequence__copy(
  const messages_fr3__srv__ControllerActivation_Response__Sequence * input,
  messages_fr3__srv__ControllerActivation_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(messages_fr3__srv__ControllerActivation_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    messages_fr3__srv__ControllerActivation_Response * data =
      (messages_fr3__srv__ControllerActivation_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!messages_fr3__srv__ControllerActivation_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          messages_fr3__srv__ControllerActivation_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!messages_fr3__srv__ControllerActivation_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
