// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from messages_fr3:msg/JointEEState.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__JOINT_EE_STATE__FUNCTIONS_H_
#define MESSAGES_FR3__MSG__DETAIL__JOINT_EE_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "messages_fr3/msg/rosidl_generator_c__visibility_control.h"

#include "messages_fr3/msg/detail/joint_ee_state__struct.h"

/// Initialize msg/JointEEState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * messages_fr3__msg__JointEEState
 * )) before or use
 * messages_fr3__msg__JointEEState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
bool
messages_fr3__msg__JointEEState__init(messages_fr3__msg__JointEEState * msg);

/// Finalize msg/JointEEState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
void
messages_fr3__msg__JointEEState__fini(messages_fr3__msg__JointEEState * msg);

/// Create msg/JointEEState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * messages_fr3__msg__JointEEState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
messages_fr3__msg__JointEEState *
messages_fr3__msg__JointEEState__create();

/// Destroy msg/JointEEState message.
/**
 * It calls
 * messages_fr3__msg__JointEEState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
void
messages_fr3__msg__JointEEState__destroy(messages_fr3__msg__JointEEState * msg);

/// Check for msg/JointEEState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
bool
messages_fr3__msg__JointEEState__are_equal(const messages_fr3__msg__JointEEState * lhs, const messages_fr3__msg__JointEEState * rhs);

/// Copy a msg/JointEEState message.
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
messages_fr3__msg__JointEEState__copy(
  const messages_fr3__msg__JointEEState * input,
  messages_fr3__msg__JointEEState * output);

/// Initialize array of msg/JointEEState messages.
/**
 * It allocates the memory for the number of elements and calls
 * messages_fr3__msg__JointEEState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
bool
messages_fr3__msg__JointEEState__Sequence__init(messages_fr3__msg__JointEEState__Sequence * array, size_t size);

/// Finalize array of msg/JointEEState messages.
/**
 * It calls
 * messages_fr3__msg__JointEEState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
void
messages_fr3__msg__JointEEState__Sequence__fini(messages_fr3__msg__JointEEState__Sequence * array);

/// Create array of msg/JointEEState messages.
/**
 * It allocates the memory for the array and calls
 * messages_fr3__msg__JointEEState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
messages_fr3__msg__JointEEState__Sequence *
messages_fr3__msg__JointEEState__Sequence__create(size_t size);

/// Destroy array of msg/JointEEState messages.
/**
 * It calls
 * messages_fr3__msg__JointEEState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
void
messages_fr3__msg__JointEEState__Sequence__destroy(messages_fr3__msg__JointEEState__Sequence * array);

/// Check for msg/JointEEState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_fr3
bool
messages_fr3__msg__JointEEState__Sequence__are_equal(const messages_fr3__msg__JointEEState__Sequence * lhs, const messages_fr3__msg__JointEEState__Sequence * rhs);

/// Copy an array of msg/JointEEState messages.
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
messages_fr3__msg__JointEEState__Sequence__copy(
  const messages_fr3__msg__JointEEState__Sequence * input,
  messages_fr3__msg__JointEEState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_FR3__MSG__DETAIL__JOINT_EE_STATE__FUNCTIONS_H_
