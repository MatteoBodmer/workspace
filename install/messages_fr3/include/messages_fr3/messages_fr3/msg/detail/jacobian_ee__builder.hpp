// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_fr3:msg/JacobianEE.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__JACOBIAN_EE__BUILDER_HPP_
#define MESSAGES_FR3__MSG__DETAIL__JACOBIAN_EE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "messages_fr3/msg/detail/jacobian_ee__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace messages_fr3
{

namespace msg
{

namespace builder
{

class Init_JacobianEE_dtjacobianee
{
public:
  explicit Init_JacobianEE_dtjacobianee(::messages_fr3::msg::JacobianEE & msg)
  : msg_(msg)
  {}
  ::messages_fr3::msg::JacobianEE dtjacobianee(::messages_fr3::msg::JacobianEE::_dtjacobianee_type arg)
  {
    msg_.dtjacobianee = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_fr3::msg::JacobianEE msg_;
};

class Init_JacobianEE_jacobianee
{
public:
  Init_JacobianEE_jacobianee()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JacobianEE_dtjacobianee jacobianee(::messages_fr3::msg::JacobianEE::_jacobianee_type arg)
  {
    msg_.jacobianee = std::move(arg);
    return Init_JacobianEE_dtjacobianee(msg_);
  }

private:
  ::messages_fr3::msg::JacobianEE msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_fr3::msg::JacobianEE>()
{
  return messages_fr3::msg::builder::Init_JacobianEE_jacobianee();
}

}  // namespace messages_fr3

#endif  // MESSAGES_FR3__MSG__DETAIL__JACOBIAN_EE__BUILDER_HPP_
