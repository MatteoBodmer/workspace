// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from messages_fr3:msg/JointConfig.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__JOINT_CONFIG__FUNCTIONS_H_
#define MESSAGES_FR3__MSG__DETAIL__JOINT_CONFIG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "messages_fr3/msg/rosidl_generator_c__visibility_control.h"

#include "messages_fr3/msg/detail/joint_config__struct.h"

/// Initialize msg/JointConfig message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * messages_fr3__msg__JointConfig
 * )) before or use
 * messages_fr3__msg__JointConfig__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
bool
messages_fr3__msg__JointConfig__init(messages_fr3__msg__JointConfig * msg);

/// Finalize msg/JointConfig message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
void
messages_fr3__msg__JointConfig__fini(messages_fr3__msg__JointConfig * msg);

/// Create msg/JointConfig message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * messages_fr3__msg__JointConfig__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
messages_fr3__msg__JointConfig *
messages_fr3__msg__JointConfig__create();

/// Destroy msg/JointConfig message.
/**
 * It calls
 * messages_fr3__msg__JointConfig__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
void
messages_fr3__msg__JointConfig__destroy(messages_fr3__msg__JointConfig * msg);

/// Check for msg/JointConfig message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
bool
messages_fr3__msg__JointConfig__are_equal(const messages_fr3__msg__JointConfig * lhs, const messages_fr3__msg__JointConfig * rhs);

/// Copy a msg/JointConfig message.
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
messages_fr3__msg__JointConfig__copy(
  const messages_fr3__msg__JointConfig * input,
  messages_fr3__msg__JointConfig * output);

/// Initialize array of msg/JointConfig messages.
/**
 * It allocates the memory for the number of elements and calls
 * messages_fr3__msg__JointConfig__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
bool
messages_fr3__msg__JointConfig__Sequence__init(messages_fr3__msg__JointConfig__Sequence * array, size_t size);

/// Finalize array of msg/JointConfig messages.
/**
 * It calls
 * messages_fr3__msg__JointConfig__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
void
messages_fr3__msg__JointConfig__Sequence__fini(messages_fr3__msg__JointConfig__Sequence * array);

/// Create array of msg/JointConfig messages.
/**
 * It allocates the memory for the array and calls
 * messages_fr3__msg__JointConfig__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
messages_fr3__msg__JointConfig__Sequence *
messages_fr3__msg__JointConfig__Sequence__create(size_t size);

/// Destroy array of msg/JointConfig messages.
/**
 * It calls
 * messages_fr3__msg__JointConfig__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
void
messages_fr3__msg__JointConfig__Sequence__destroy(messages_fr3__msg__JointConfig__Sequence * array);

/// Check for msg/JointConfig message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
bool
messages_fr3__msg__JointConfig__Sequence__are_equal(const messages_fr3__msg__JointConfig__Sequence * lhs, const messages_fr3__msg__JointConfig__Sequence * rhs);

/// Copy an array of msg/JointConfig messages.
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
messages_fr3__msg__JointConfig__Sequence__copy(
  const messages_fr3__msg__JointConfig__Sequence * input,
  messages_fr3__msg__JointConfig__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_FR3__MSG__DETAIL__JOINT_CONFIG__FUNCTIONS_H_
