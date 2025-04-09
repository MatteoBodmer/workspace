// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_fr3:msg/JointConfig.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__JOINT_CONFIG__STRUCT_H_
#define MESSAGES_FR3__MSG__DETAIL__JOINT_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/JointConfig in the package messages_fr3.
typedef struct messages_fr3__msg__JointConfig
{
  double joint1;
  double joint2;
  double joint3;
  double joint4;
  double joint5;
  double joint6;
  double joint7;
} messages_fr3__msg__JointConfig;

// Struct for a sequence of messages_fr3__msg__JointConfig.
typedef struct messages_fr3__msg__JointConfig__Sequence
{
  messages_fr3__msg__JointConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_fr3__msg__JointConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_FR3__MSG__DETAIL__JOINT_CONFIG__STRUCT_H_
