// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages_fr3:msg/JointEEState.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__JOINT_EE_STATE__TRAITS_HPP_
#define MESSAGES_FR3__MSG__DETAIL__JOINT_EE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "messages_fr3/msg/detail/joint_ee_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace messages_fr3
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointEEState & msg,
  std::ostream & out)
{
  out << "{";
  // member: jointzacceleration
  {
    out << "jointzacceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.jointzacceleration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointEEState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: jointzacceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jointzacceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.jointzacceleration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointEEState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace messages_fr3

namespace rosidl_generator_traits
{

[[deprecated("use messages_fr3::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const messages_fr3::msg::JointEEState & msg,
  std::ostream & out, size_t indentation = 0)
{
  messages_fr3::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use messages_fr3::msg::to_yaml() instead")]]
inline std::string to_yaml(const messages_fr3::msg::JointEEState & msg)
{
  return messages_fr3::msg::to_yaml(msg);
}

template<>
inline const char * data_type<messages_fr3::msg::JointEEState>()
{
  return "messages_fr3::msg::JointEEState";
}

template<>
inline const char * name<messages_fr3::msg::JointEEState>()
{
  return "messages_fr3/msg/JointEEState";
}

template<>
struct has_fixed_size<messages_fr3::msg::JointEEState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages_fr3::msg::JointEEState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages_fr3::msg::JointEEState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES_FR3__MSG__DETAIL__JOINT_EE_STATE__TRAITS_HPP_
