// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from messages_fr3:msg/JacobianEE.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "messages_fr3/msg/detail/jacobian_ee__struct.hpp"
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

void JacobianEE_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) messages_fr3::msg::JacobianEE(_init);
}

void JacobianEE_fini_function(void * message_memory)
{
  auto typed_message = static_cast<messages_fr3::msg::JacobianEE *>(message_memory);
  typed_message->~JacobianEE();
}

size_t size_function__JacobianEE__jacobianee(const void * untyped_member)
{
  (void)untyped_member;
  return 42;
}

const void * get_const_function__JacobianEE__jacobianee(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 42> *>(untyped_member);
  return &member[index];
}

void * get_function__JacobianEE__jacobianee(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 42> *>(untyped_member);
  return &member[index];
}

void fetch_function__JacobianEE__jacobianee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JacobianEE__jacobianee(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JacobianEE__jacobianee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JacobianEE__jacobianee(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__JacobianEE__dtjacobianee(const void * untyped_member)
{
  (void)untyped_member;
  return 42;
}

const void * get_const_function__JacobianEE__dtjacobianee(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 42> *>(untyped_member);
  return &member[index];
}

void * get_function__JacobianEE__dtjacobianee(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 42> *>(untyped_member);
  return &member[index];
}

void fetch_function__JacobianEE__dtjacobianee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JacobianEE__dtjacobianee(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JacobianEE__dtjacobianee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JacobianEE__dtjacobianee(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JacobianEE_message_member_array[2] = {
  {
    "jacobianee",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    42,  // array size
    false,  // is upper bound
    offsetof(messages_fr3::msg::JacobianEE, jacobianee),  // bytes offset in struct
    nullptr,  // default value
    size_function__JacobianEE__jacobianee,  // size() function pointer
    get_const_function__JacobianEE__jacobianee,  // get_const(index) function pointer
    get_function__JacobianEE__jacobianee,  // get(index) function pointer
    fetch_function__JacobianEE__jacobianee,  // fetch(index, &value) function pointer
    assign_function__JacobianEE__jacobianee,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dtjacobianee",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    42,  // array size
    false,  // is upper bound
    offsetof(messages_fr3::msg::JacobianEE, dtjacobianee),  // bytes offset in struct
    nullptr,  // default value
    size_function__JacobianEE__dtjacobianee,  // size() function pointer
    get_const_function__JacobianEE__dtjacobianee,  // get_const(index) function pointer
    get_function__JacobianEE__dtjacobianee,  // get(index) function pointer
    fetch_function__JacobianEE__dtjacobianee,  // fetch(index, &value) function pointer
    assign_function__JacobianEE__dtjacobianee,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JacobianEE_message_members = {
  "messages_fr3::msg",  // message namespace
  "JacobianEE",  // message name
  2,  // number of fields
  sizeof(messages_fr3::msg::JacobianEE),
  JacobianEE_message_member_array,  // message members
  JacobianEE_init_function,  // function to initialize message memory (memory has to be allocated)
  JacobianEE_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JacobianEE_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JacobianEE_message_members,
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
get_message_type_support_handle<messages_fr3::msg::JacobianEE>()
{
  return &::messages_fr3::msg::rosidl_typesupport_introspection_cpp::JacobianEE_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages_fr3, msg, JacobianEE)() {
  return &::messages_fr3::msg::rosidl_typesupport_introspection_cpp::JacobianEE_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
