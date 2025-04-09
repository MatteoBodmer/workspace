// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from messages_fr3:msg/JacobianEE.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "messages_fr3/msg/detail/jacobian_ee__rosidl_typesupport_introspection_c.h"
#include "messages_fr3/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "messages_fr3/msg/detail/jacobian_ee__functions.h"
#include "messages_fr3/msg/detail/jacobian_ee__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__JacobianEE_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_fr3__msg__JacobianEE__init(message_memory);
}

void messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__JacobianEE_fini_function(void * message_memory)
{
  messages_fr3__msg__JacobianEE__fini(message_memory);
}

size_t messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__size_function__JacobianEE__jacobianee(
  const void * untyped_member)
{
  (void)untyped_member;
  return 42;
}

const void * messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__get_const_function__JacobianEE__jacobianee(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__get_function__JacobianEE__jacobianee(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__fetch_function__JacobianEE__jacobianee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__get_const_function__JacobianEE__jacobianee(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__assign_function__JacobianEE__jacobianee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__get_function__JacobianEE__jacobianee(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__size_function__JacobianEE__dtjacobianee(
  const void * untyped_member)
{
  (void)untyped_member;
  return 42;
}

const void * messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__get_const_function__JacobianEE__dtjacobianee(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__get_function__JacobianEE__dtjacobianee(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__fetch_function__JacobianEE__dtjacobianee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__get_const_function__JacobianEE__dtjacobianee(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__assign_function__JacobianEE__dtjacobianee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__get_function__JacobianEE__dtjacobianee(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__JacobianEE_message_member_array[2] = {
  {
    "jacobianee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    42,  // array size
    false,  // is upper bound
    offsetof(messages_fr3__msg__JacobianEE, jacobianee),  // bytes offset in struct
    NULL,  // default value
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__size_function__JacobianEE__jacobianee,  // size() function pointer
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__get_const_function__JacobianEE__jacobianee,  // get_const(index) function pointer
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__get_function__JacobianEE__jacobianee,  // get(index) function pointer
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__fetch_function__JacobianEE__jacobianee,  // fetch(index, &value) function pointer
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__assign_function__JacobianEE__jacobianee,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dtjacobianee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    42,  // array size
    false,  // is upper bound
    offsetof(messages_fr3__msg__JacobianEE, dtjacobianee),  // bytes offset in struct
    NULL,  // default value
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__size_function__JacobianEE__dtjacobianee,  // size() function pointer
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__get_const_function__JacobianEE__dtjacobianee,  // get_const(index) function pointer
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__get_function__JacobianEE__dtjacobianee,  // get(index) function pointer
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__fetch_function__JacobianEE__dtjacobianee,  // fetch(index, &value) function pointer
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__assign_function__JacobianEE__dtjacobianee,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__JacobianEE_message_members = {
  "messages_fr3__msg",  // message namespace
  "JacobianEE",  // message name
  2,  // number of fields
  sizeof(messages_fr3__msg__JacobianEE),
  messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__JacobianEE_message_member_array,  // message members
  messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__JacobianEE_init_function,  // function to initialize message memory (memory has to be allocated)
  messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__JacobianEE_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__JacobianEE_message_type_support_handle = {
  0,
  &messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__JacobianEE_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_fr3
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_fr3, msg, JacobianEE)() {
  if (!messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__JacobianEE_message_type_support_handle.typesupport_identifier) {
    messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__JacobianEE_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &messages_fr3__msg__JacobianEE__rosidl_typesupport_introspection_c__JacobianEE_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
