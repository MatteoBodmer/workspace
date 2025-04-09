// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from messages_fr3:msg/JointConfig.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "messages_fr3/msg/detail/joint_config__rosidl_typesupport_introspection_c.h"
#include "messages_fr3/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "messages_fr3/msg/detail/joint_config__functions.h"
#include "messages_fr3/msg/detail/joint_config__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void messages_fr3__msg__JointConfig__rosidl_typesupport_introspection_c__JointConfig_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_fr3__msg__JointConfig__init(message_memory);
}

void messages_fr3__msg__JointConfig__rosidl_typesupport_introspection_c__JointConfig_fini_function(void * message_memory)
{
  messages_fr3__msg__JointConfig__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember messages_fr3__msg__JointConfig__rosidl_typesupport_introspection_c__JointConfig_message_member_array[7] = {
  {
    "joint1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_fr3__msg__JointConfig, joint1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_fr3__msg__JointConfig, joint2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_fr3__msg__JointConfig, joint3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_fr3__msg__JointConfig, joint4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_fr3__msg__JointConfig, joint5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_fr3__msg__JointConfig, joint6),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint7",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_fr3__msg__JointConfig, joint7),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers messages_fr3__msg__JointConfig__rosidl_typesupport_introspection_c__JointConfig_message_members = {
  "messages_fr3__msg",  // message namespace
  "JointConfig",  // message name
  7,  // number of fields
  sizeof(messages_fr3__msg__JointConfig),
  messages_fr3__msg__JointConfig__rosidl_typesupport_introspection_c__JointConfig_message_member_array,  // message members
  messages_fr3__msg__JointConfig__rosidl_typesupport_introspection_c__JointConfig_init_function,  // function to initialize message memory (memory has to be allocated)
  messages_fr3__msg__JointConfig__rosidl_typesupport_introspection_c__JointConfig_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t messages_fr3__msg__JointConfig__rosidl_typesupport_introspection_c__JointConfig_message_type_support_handle = {
  0,
  &messages_fr3__msg__JointConfig__rosidl_typesupport_introspection_c__JointConfig_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_fr3
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_fr3, msg, JointConfig)() {
  if (!messages_fr3__msg__JointConfig__rosidl_typesupport_introspection_c__JointConfig_message_type_support_handle.typesupport_identifier) {
    messages_fr3__msg__JointConfig__rosidl_typesupport_introspection_c__JointConfig_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &messages_fr3__msg__JointConfig__rosidl_typesupport_introspection_c__JointConfig_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
