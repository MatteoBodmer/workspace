// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages_fr3:msg/JacobianEE.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__JACOBIAN_EE__TRAITS_HPP_
#define MESSAGES_FR3__MSG__DETAIL__JACOBIAN_EE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "messages_fr3/msg/detail/jacobian_ee__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace messages_fr3
{

namespace msg
{

inline void to_flow_style_yaml(
  const JacobianEE & msg,
  std::ostream & out)
{
  out << "{";
  // member: jacobianee
  {
    if (msg.jacobianee.size() == 0) {
      out << "jacobianee: []";
    } else {
      out << "jacobianee: [";
      size_t pending_items = msg.jacobianee.size();
      for (auto item : msg.jacobianee) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dtjacobianee
  {
    if (msg.dtjacobianee.size() == 0) {
      out << "dtjacobianee: []";
    } else {
      out << "dtjacobianee: [";
      size_t pending_items = msg.dtjacobianee.size();
      for (auto item : msg.dtjacobianee) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JacobianEE & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: jacobianee
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.jacobianee.size() == 0) {
      out << "jacobianee: []\n";
    } else {
      out << "jacobianee:\n";
      for (auto item : msg.jacobianee) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dtjacobianee
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dtjacobianee.size() == 0) {
      out << "dtjacobianee: []\n";
    } else {
      out << "dtjacobianee:\n";
      for (auto item : msg.dtjacobianee) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JacobianEE & msg, bool use_flow_style = false)
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
  const messages_fr3::msg::JacobianEE & msg,
  std::ostream & out, size_t indentation = 0)
{
  messages_fr3::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use messages_fr3::msg::to_yaml() instead")]]
inline std::string to_yaml(const messages_fr3::msg::JacobianEE & msg)
{
  return messages_fr3::msg::to_yaml(msg);
}

template<>
inline const char * data_type<messages_fr3::msg::JacobianEE>()
{
  return "messages_fr3::msg::JacobianEE";
}

template<>
inline const char * name<messages_fr3::msg::JacobianEE>()
{
  return "messages_fr3/msg/JacobianEE";
}

template<>
struct has_fixed_size<messages_fr3::msg::JacobianEE>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages_fr3::msg::JacobianEE>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages_fr3::msg::JacobianEE>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES_FR3__MSG__DETAIL__JACOBIAN_EE__TRAITS_HPP_
