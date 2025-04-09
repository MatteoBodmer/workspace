// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_fr3:msg/JointConfig.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__JOINT_CONFIG__BUILDER_HPP_
#define MESSAGES_FR3__MSG__DETAIL__JOINT_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "messages_fr3/msg/detail/joint_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace messages_fr3
{

namespace msg
{

namespace builder
{

class Init_JointConfig_joint7
{
public:
  explicit Init_JointConfig_joint7(::messages_fr3::msg::JointConfig & msg)
  : msg_(msg)
  {}
  ::messages_fr3::msg::JointConfig joint7(::messages_fr3::msg::JointConfig::_joint7_type arg)
  {
    msg_.joint7 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_fr3::msg::JointConfig msg_;
};

class Init_JointConfig_joint6
{
public:
  explicit Init_JointConfig_joint6(::messages_fr3::msg::JointConfig & msg)
  : msg_(msg)
  {}
  Init_JointConfig_joint7 joint6(::messages_fr3::msg::JointConfig::_joint6_type arg)
  {
    msg_.joint6 = std::move(arg);
    return Init_JointConfig_joint7(msg_);
  }

private:
  ::messages_fr3::msg::JointConfig msg_;
};

class Init_JointConfig_joint5
{
public:
  explicit Init_JointConfig_joint5(::messages_fr3::msg::JointConfig & msg)
  : msg_(msg)
  {}
  Init_JointConfig_joint6 joint5(::messages_fr3::msg::JointConfig::_joint5_type arg)
  {
    msg_.joint5 = std::move(arg);
    return Init_JointConfig_joint6(msg_);
  }

private:
  ::messages_fr3::msg::JointConfig msg_;
};

class Init_JointConfig_joint4
{
public:
  explicit Init_JointConfig_joint4(::messages_fr3::msg::JointConfig & msg)
  : msg_(msg)
  {}
  Init_JointConfig_joint5 joint4(::messages_fr3::msg::JointConfig::_joint4_type arg)
  {
    msg_.joint4 = std::move(arg);
    return Init_JointConfig_joint5(msg_);
  }

private:
  ::messages_fr3::msg::JointConfig msg_;
};

class Init_JointConfig_joint3
{
public:
  explicit Init_JointConfig_joint3(::messages_fr3::msg::JointConfig & msg)
  : msg_(msg)
  {}
  Init_JointConfig_joint4 joint3(::messages_fr3::msg::JointConfig::_joint3_type arg)
  {
    msg_.joint3 = std::move(arg);
    return Init_JointConfig_joint4(msg_);
  }

private:
  ::messages_fr3::msg::JointConfig msg_;
};

class Init_JointConfig_joint2
{
public:
  explicit Init_JointConfig_joint2(::messages_fr3::msg::JointConfig & msg)
  : msg_(msg)
  {}
  Init_JointConfig_joint3 joint2(::messages_fr3::msg::JointConfig::_joint2_type arg)
  {
    msg_.joint2 = std::move(arg);
    return Init_JointConfig_joint3(msg_);
  }

private:
  ::messages_fr3::msg::JointConfig msg_;
};

class Init_JointConfig_joint1
{
public:
  Init_JointConfig_joint1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointConfig_joint2 joint1(::messages_fr3::msg::JointConfig::_joint1_type arg)
  {
    msg_.joint1 = std::move(arg);
    return Init_JointConfig_joint2(msg_);
  }

private:
  ::messages_fr3::msg::JointConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_fr3::msg::JointConfig>()
{
  return messages_fr3::msg::builder::Init_JointConfig_joint1();
}

}  // namespace messages_fr3

#endif  // MESSAGES_FR3__MSG__DETAIL__JOINT_CONFIG__BUILDER_HPP_
