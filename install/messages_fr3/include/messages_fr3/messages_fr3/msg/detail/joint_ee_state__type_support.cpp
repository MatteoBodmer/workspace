// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from messages_fr3:msg/JointEEState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "messages_fr3/msg/detail/joint_ee_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace messages_fr3
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointEEState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) messages_fr3::msg::JointEEState(_init);
}

void JointEEState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<messages_fr3::msg::JointEEState *>(message_memory);
  typed_message->~JointEEState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointEEState_message_member_array[1] = {
  {
    "jointzacceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_fr3::msg::JointEEState, jointzacceleration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointEEState_message_members = {
  "messages_fr3::msg",  // message namespace
  "JointEEState",  // message name
  1,  // number of fields
  sizeof(messages_fr3::msg::JointEEState),
  JointEEState_message_member_array,  // message members
  JointEEState_init_function,  // function to initialize message memory (memory has to be allocated)
  JointEEState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointEEState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointEEState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace messages_fr3


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<messages_fr3::msg::JointEEState>()
{
  return &::messages_fr3::msg::rosidl_typesupport_introspection_cpp::JointEEState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages_fr3, msg, JointEEState)() {
  return &::messages_fr3::msg::rosidl_typesupport_introspection_cpp::JointEEState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
