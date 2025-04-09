// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_fr3:srv/ControllerActivation.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__SRV__DETAIL__CONTROLLER_ACTIVATION__BUILDER_HPP_
#define MESSAGES_FR3__SRV__DETAIL__CONTROLLER_ACTIVATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "messages_fr3/srv/detail/controller_activation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace messages_fr3
{

namespace srv
{

namespace builder
{

class Init_ControllerActivation_Request_controller_activation
{
public:
  Init_ControllerActivation_Request_controller_activation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_fr3::srv::ControllerActivation_Request controller_activation(::messages_fr3::srv::ControllerActivation_Request::_controller_activation_type arg)
  {
    msg_.controller_activation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_fr3::srv::ControllerActivation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_fr3::srv::ControllerActivation_Request>()
{
  return messages_fr3::srv::builder::Init_ControllerActivation_Request_controller_activation();
}

}  // namespace messages_fr3


namespace messages_fr3
{

namespace srv
{

namespace builder
{

class Init_ControllerActivation_Response_success
{
public:
  Init_ControllerActivation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_fr3::srv::ControllerActivation_Response success(::messages_fr3::srv::ControllerActivation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_fr3::srv::ControllerActivation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_fr3::srv::ControllerActivation_Response>()
{
  return messages_fr3::srv::builder::Init_ControllerActivation_Response_success();
}

}  // namespace messages_fr3

#endif  // MESSAGES_FR3__SRV__DETAIL__CONTROLLER_ACTIVATION__BUILDER_HPP_
