// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_fr3:msg/PoseDirection.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__STRUCT_H_
#define MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PoseDirection in the package messages_fr3.
typedef struct messages_fr3__msg__PoseDirection
{
  double x;
  double y;
  double z;
  double roll;
  double pitch;
  double yaw;
  double directionx;
  double directiony;
  double directionz;
} messages_fr3__msg__PoseDirection;

// Struct for a sequence of messages_fr3__msg__PoseDirection.
typedef struct messages_fr3__msg__PoseDirection__Sequence
{
  messages_fr3__msg__PoseDirection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_fr3__msg__PoseDirection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__STRUCT_H_
