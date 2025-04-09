// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from messages_fr3:msg/PoseDirection.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__FUNCTIONS_H_
#define MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "messages_fr3/msg/rosidl_generator_c__visibility_control.h"

#include "messages_fr3/msg/detail/pose_direction__struct.h"

/// Initialize msg/PoseDirection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * messages_fr3__msg__PoseDirection
 * )) before or use
 * messages_fr3__msg__PoseDirection__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
bool
messages_fr3__msg__PoseDirection__init(messages_fr3__msg__PoseDirection * msg);

/// Finalize msg/PoseDirection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
void
messages_fr3__msg__PoseDirection__fini(messages_fr3__msg__PoseDirection * msg);

/// Create msg/PoseDirection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * messages_fr3__msg__PoseDirection__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
messages_fr3__msg__PoseDirection *
messages_fr3__msg__PoseDirection__create();

/// Destroy msg/PoseDirection message.
/**
 * It calls
 * messages_fr3__msg__PoseDirection__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
void
messages_fr3__msg__PoseDirection__destroy(messages_fr3__msg__PoseDirection * msg);

/// Check for msg/PoseDirection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
bool
messages_fr3__msg__PoseDirection__are_equal(const messages_fr3__msg__PoseDirection * lhs, const messages_fr3__msg__PoseDirection * rhs);

/// Copy a msg/PoseDirection message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
bool
messages_fr3__msg__PoseDirection__copy(
  const messages_fr3__msg__PoseDirection * input,
  messages_fr3__msg__PoseDirection * output);

/// Initialize array of msg/PoseDirection messages.
/**
 * It allocates the memory for the number of elements and calls
 * messages_fr3__msg__PoseDirection__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
bool
messages_fr3__msg__PoseDirection__Sequence__init(messages_fr3__msg__PoseDirection__Sequence * array, size_t size);

/// Finalize array of msg/PoseDirection messages.
/**
 * It calls
 * messages_fr3__msg__PoseDirection__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
void
messages_fr3__msg__PoseDirection__Sequence__fini(messages_fr3__msg__PoseDirection__Sequence * array);

/// Create array of msg/PoseDirection messages.
/**
 * It allocates the memory for the array and calls
 * messages_fr3__msg__PoseDirection__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
messages_fr3__msg__PoseDirection__Sequence *
messages_fr3__msg__PoseDirection__Sequence__create(size_t size);

/// Destroy array of msg/PoseDirection messages.
/**
 * It calls
 * messages_fr3__msg__PoseDirection__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
void
messages_fr3__msg__PoseDirection__Sequence__destroy(messages_fr3__msg__PoseDirection__Sequence * array);

/// Check for msg/PoseDirection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
bool
messages_fr3__msg__PoseDirection__Sequence__are_equal(const messages_fr3__msg__PoseDirection__Sequence * lhs, const messages_fr3__msg__PoseDirection__Sequence * rhs);

/// Copy an array of msg/PoseDirection messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
bool
messages_fr3__msg__PoseDirection__Sequence__copy(
  const messages_fr3__msg__PoseDirection__Sequence * input,
  messages_fr3__msg__PoseDirection__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__FUNCTIONS_H_
