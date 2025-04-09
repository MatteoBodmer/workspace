// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages_fr3:srv/ControllerActivation.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__SRV__DETAIL__CONTROLLER_ACTIVATION__TRAITS_HPP_
#define MESSAGES_FR3__SRV__DETAIL__CONTROLLER_ACTIVATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "messages_fr3/srv/detail/controller_activation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace messages_fr3
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControllerActivation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: controller_activation
  {
    out << "controller_activation: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_activation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerActivation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: controller_activation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_activation: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_activation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerActivation_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace messages_fr3

namespace rosidl_generator_traits
{

[[deprecated("use messages_fr3::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const messages_fr3::srv::ControllerActivation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  messages_fr3::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use messages_fr3::srv::to_yaml() instead")]]
inline std::string to_yaml(const messages_fr3::srv::ControllerActivation_Request & msg)
{
  return messages_fr3::srv::to_yaml(msg);
}

template<>
inline const char * data_type<messages_fr3::srv::ControllerActivation_Request>()
{
  return "messages_fr3::srv::ControllerActivation_Request";
}

template<>
inline const char * name<messages_fr3::srv::ControllerActivation_Request>()
{
  return "messages_fr3/srv/ControllerActivation_Request";
}

template<>
struct has_fixed_size<messages_fr3::srv::ControllerActivation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages_fr3::srv::ControllerActivation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages_fr3::srv::ControllerActivation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace messages_fr3
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControllerActivation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerActivation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerActivation_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace messages_fr3

namespace rosidl_generator_traits
{

[[deprecated("use messages_fr3::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const messages_fr3::srv::ControllerActivation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  messages_fr3::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use messages_fr3::srv::to_yaml() instead")]]
inline std::string to_yaml(const messages_fr3::srv::ControllerActivation_Response & msg)
{
  return messages_fr3::srv::to_yaml(msg);
}

template<>
inline const char * data_type<messages_fr3::srv::ControllerActivation_Response>()
{
  return "messages_fr3::srv::ControllerActivation_Response";
}

template<>
inline const char * name<messages_fr3::srv::ControllerActivation_Response>()
{
  return "messages_fr3/srv/ControllerActivation_Response";
}

template<>
struct has_fixed_size<messages_fr3::srv::ControllerActivation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages_fr3::srv::ControllerActivation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages_fr3::srv::ControllerActivation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_fr3::srv::ControllerActivation>()
{
  return "messages_fr3::srv::ControllerActivation";
}

template<>
inline const char * name<messages_fr3::srv::ControllerActivation>()
{
  return "messages_fr3/srv/ControllerActivation";
}

template<>
struct has_fixed_size<messages_fr3::srv::ControllerActivation>
  : std::integral_constant<
    bool,
    has_fixed_size<messages_fr3::srv::ControllerActivation_Request>::value &&
    has_fixed_size<messages_fr3::srv::ControllerActivation_Response>::value
  >
{
};

template<>
struct has_bounded_size<messages_fr3::srv::ControllerActivation>
  : std::integral_constant<
    bool,
    has_bounded_size<messages_fr3::srv::ControllerActivation_Request>::value &&
    has_bounded_size<messages_fr3::srv::ControllerActivation_Response>::value
  >
{
};

template<>
struct is_service<messages_fr3::srv::ControllerActivation>
  : std::true_type
{
};

template<>
struct is_service_request<messages_fr3::srv::ControllerActivation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<messages_fr3::srv::ControllerActivation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES_FR3__SRV__DETAIL__CONTROLLER_ACTIVATION__TRAITS_HPP_
