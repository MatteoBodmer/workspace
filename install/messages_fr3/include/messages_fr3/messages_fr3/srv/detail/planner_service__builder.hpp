// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_fr3:srv/PlannerService.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__SRV__DETAIL__PLANNER_SERVICE__BUILDER_HPP_
#define MESSAGES_FR3__SRV__DETAIL__PLANNER_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "messages_fr3/srv/detail/planner_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace messages_fr3
{

namespace srv
{

namespace builder
{

class Init_PlannerService_Request_command
{
public:
  Init_PlannerService_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_fr3::srv::PlannerService_Request command(::messages_fr3::srv::PlannerService_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_fr3::srv::PlannerService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_fr3::srv::PlannerService_Request>()
{
  return messages_fr3::srv::builder::Init_PlannerService_Request_command();
}

}  // namespace messages_fr3


namespace messages_fr3
{

namespace srv
{

namespace builder
{

class Init_PlannerService_Response_success
{
public:
  Init_PlannerService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_fr3::srv::PlannerService_Response success(::messages_fr3::srv::PlannerService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_fr3::srv::PlannerService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_fr3::srv::PlannerService_Response>()
{
  return messages_fr3::srv::builder::Init_PlannerService_Response_success();
}

}  // namespace messages_fr3

#endif  // MESSAGES_FR3__SRV__DETAIL__PLANNER_SERVICE__BUILDER_HPP_
