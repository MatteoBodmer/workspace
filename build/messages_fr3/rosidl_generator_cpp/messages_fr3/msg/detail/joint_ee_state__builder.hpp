// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_fr3:msg/JointEEState.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__JOINT_EE_STATE__BUILDER_HPP_
#define MESSAGES_FR3__MSG__DETAIL__JOINT_EE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "messages_fr3/msg/detail/joint_ee_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace messages_fr3
{

namespace msg
{

namespace builder
{

class Init_JointEEState_jointzacceleration
{
public:
  Init_JointEEState_jointzacceleration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_fr3::msg::JointEEState jointzacceleration(::messages_fr3::msg::JointEEState::_jointzacceleration_type arg)
  {
    msg_.jointzacceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_fr3::msg::JointEEState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_fr3::msg::JointEEState>()
{
  return messages_fr3::msg::builder::Init_JointEEState_jointzacceleration();
}

}  // namespace messages_fr3

#endif  // MESSAGES_FR3__MSG__DETAIL__JOINT_EE_STATE__BUILDER_HPP_
