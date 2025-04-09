// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_fr3:msg/JacobianEE.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__JACOBIAN_EE__STRUCT_H_
#define MESSAGES_FR3__MSG__DETAIL__JACOBIAN_EE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/JacobianEE in the package messages_fr3.
typedef struct messages_fr3__msg__JacobianEE
{
  double jacobianee[42];
  double dtjacobianee[42];
} messages_fr3__msg__JacobianEE;

// Struct for a sequence of messages_fr3__msg__JacobianEE.
typedef struct messages_fr3__msg__JacobianEE__Sequence
{
  messages_fr3__msg__JacobianEE * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_fr3__msg__JacobianEE__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_FR3__MSG__DETAIL__JACOBIAN_EE__STRUCT_H_
