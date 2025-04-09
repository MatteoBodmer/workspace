// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_fr3:srv/SetStiffness.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__SRV__DETAIL__SET_STIFFNESS__STRUCT_H_
#define MESSAGES_FR3__SRV__DETAIL__SET_STIFFNESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetStiffness in the package messages_fr3.
typedef struct messages_fr3__srv__SetStiffness_Request
{
  double a;
  double b;
  double c;
  double d;
  double e;
  double f;
  bool drillactivation;
} messages_fr3__srv__SetStiffness_Request;

// Struct for a sequence of messages_fr3__srv__SetStiffness_Request.
typedef struct messages_fr3__srv__SetStiffness_Request__Sequence
{
  messages_fr3__srv__SetStiffness_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_fr3__srv__SetStiffness_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetStiffness in the package messages_fr3.
typedef struct messages_fr3__srv__SetStiffness_Response
{
  bool success;
} messages_fr3__srv__SetStiffness_Response;

// Struct for a sequence of messages_fr3__srv__SetStiffness_Response.
typedef struct messages_fr3__srv__SetStiffness_Response__Sequence
{
  messages_fr3__srv__SetStiffness_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_fr3__srv__SetStiffness_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_FR3__SRV__DETAIL__SET_STIFFNESS__STRUCT_H_
