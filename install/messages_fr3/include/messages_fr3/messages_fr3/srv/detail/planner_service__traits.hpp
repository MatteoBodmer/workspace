// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages_fr3:srv/PlannerService.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__SRV__DETAIL__PLANNER_SERVICE__TRAITS_HPP_
#define MESSAGES_FR3__SRV__DETAIL__PLANNER_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "messages_fr3/srv/detail/planner_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace messages_fr3
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlannerService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlannerService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlannerService_Request & msg, bool use_flow_style = false)
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
  const messages_fr3::srv::PlannerService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  messages_fr3::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use messages_fr3::srv::to_yaml() instead")]]
inline std::string to_yaml(const messages_fr3::srv::PlannerService_Request & msg)
{
  return messages_fr3::srv::to_yaml(msg);
}

template<>
inline const char * data_type<messages_fr3::srv::PlannerService_Request>()
{
  return "messages_fr3::srv::PlannerService_Request";
}

template<>
inline const char * name<messages_fr3::srv::PlannerService_Request>()
{
  return "messages_fr3/srv/PlannerService_Request";
}

template<>
struct has_fixed_size<messages_fr3::srv::PlannerService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<messages_fr3::srv::PlannerService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<messages_fr3::srv::PlannerService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace messages_fr3
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlannerService_Response & msg,
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
  const PlannerService_Response & msg,
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

inline std::string to_yaml(const PlannerService_Response & msg, bool use_flow_style = false)
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
  const messages_fr3::srv::PlannerService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  messages_fr3::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use messages_fr3::srv::to_yaml() instead")]]
inline std::string to_yaml(const messages_fr3::srv::PlannerService_Response & msg)
{
  return messages_fr3::srv::to_yaml(msg);
}

template<>
inline const char * data_type<messages_fr3::srv::PlannerService_Response>()
{
  return "messages_fr3::srv::PlannerService_Response";
}

template<>
inline const char * name<messages_fr3::srv::PlannerService_Response>()
{
  return "messages_fr3/srv/PlannerService_Response";
}

template<>
struct has_fixed_size<messages_fr3::srv::PlannerService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages_fr3::srv::PlannerService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages_fr3::srv::PlannerService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_fr3::srv::PlannerService>()
{
  return "messages_fr3::srv::PlannerService";
}

template<>
inline const char * name<messages_fr3::srv::PlannerService>()
{
  return "messages_fr3/srv/PlannerService";
}

template<>
struct has_fixed_size<messages_fr3::srv::PlannerService>
  : std::integral_constant<
    bool,
    has_fixed_size<messages_fr3::srv::PlannerService_Request>::value &&
    has_fixed_size<messages_fr3::srv::PlannerService_Response>::value
  >
{
};

template<>
struct has_bounded_size<messages_fr3::srv::PlannerService>
  : std::integral_constant<
    bool,
    has_bounded_size<messages_fr3::srv::PlannerService_Request>::value &&
    has_bounded_size<messages_fr3::srv::PlannerService_Response>::value
  >
{
};

template<>
struct is_service<messages_fr3::srv::PlannerService>
  : std::true_type
{
};

template<>
struct is_service_request<messages_fr3::srv::PlannerService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<messages_fr3::srv::PlannerService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES_FR3__SRV__DETAIL__PLANNER_SERVICE__TRAITS_HPP_
