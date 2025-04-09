// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages_fr3:msg/PoseDirection.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__TRAITS_HPP_
#define MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "messages_fr3/msg/detail/pose_direction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace messages_fr3
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseDirection & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: directionx
  {
    out << "directionx: ";
    rosidl_generator_traits::value_to_yaml(msg.directionx, out);
    out << ", ";
  }

  // member: directiony
  {
    out << "directiony: ";
    rosidl_generator_traits::value_to_yaml(msg.directiony, out);
    out << ", ";
  }

  // member: directionz
  {
    out << "directionz: ";
    rosidl_generator_traits::value_to_yaml(msg.directionz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseDirection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: directionx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "directionx: ";
    rosidl_generator_traits::value_to_yaml(msg.directionx, out);
    out << "\n";
  }

  // member: directiony
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "directiony: ";
    rosidl_generator_traits::value_to_yaml(msg.directiony, out);
    out << "\n";
  }

  // member: directionz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "directionz: ";
    rosidl_generator_traits::value_to_yaml(msg.directionz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseDirection & msg, bool use_flow_style = false)
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
  const messages_fr3::msg::PoseDirection & msg,
  std::ostream & out, size_t indentation = 0)
{
  messages_fr3::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use messages_fr3::msg::to_yaml() instead")]]
inline std::string to_yaml(const messages_fr3::msg::PoseDirection & msg)
{
  return messages_fr3::msg::to_yaml(msg);
}

template<>
inline const char * data_type<messages_fr3::msg::PoseDirection>()
{
  return "messages_fr3::msg::PoseDirection";
}

template<>
inline const char * name<messages_fr3::msg::PoseDirection>()
{
  return "messages_fr3/msg/PoseDirection";
}

template<>
struct has_fixed_size<messages_fr3::msg::PoseDirection>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages_fr3::msg::PoseDirection>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages_fr3::msg::PoseDirection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__TRAITS_HPP_
