// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_fr3:msg/PoseDirection.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__BUILDER_HPP_
#define MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "messages_fr3/msg/detail/pose_direction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace messages_fr3
{

namespace msg
{

namespace builder
{

class Init_PoseDirection_directionz
{
public:
  explicit Init_PoseDirection_directionz(::messages_fr3::msg::PoseDirection & msg)
  : msg_(msg)
  {}
  ::messages_fr3::msg::PoseDirection directionz(::messages_fr3::msg::PoseDirection::_directionz_type arg)
  {
    msg_.directionz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_fr3::msg::PoseDirection msg_;
};

class Init_PoseDirection_directiony
{
public:
  explicit Init_PoseDirection_directiony(::messages_fr3::msg::PoseDirection & msg)
  : msg_(msg)
  {}
  Init_PoseDirection_directionz directiony(::messages_fr3::msg::PoseDirection::_directiony_type arg)
  {
    msg_.directiony = std::move(arg);
    return Init_PoseDirection_directionz(msg_);
  }

private:
  ::messages_fr3::msg::PoseDirection msg_;
};

class Init_PoseDirection_directionx
{
public:
  explicit Init_PoseDirection_directionx(::messages_fr3::msg::PoseDirection & msg)
  : msg_(msg)
  {}
  Init_PoseDirection_directiony directionx(::messages_fr3::msg::PoseDirection::_directionx_type arg)
  {
    msg_.directionx = std::move(arg);
    return Init_PoseDirection_directiony(msg_);
  }

private:
  ::messages_fr3::msg::PoseDirection msg_;
};

class Init_PoseDirection_yaw
{
public:
  explicit Init_PoseDirection_yaw(::messages_fr3::msg::PoseDirection & msg)
  : msg_(msg)
  {}
  Init_PoseDirection_directionx yaw(::messages_fr3::msg::PoseDirection::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_PoseDirection_directionx(msg_);
  }

private:
  ::messages_fr3::msg::PoseDirection msg_;
};

class Init_PoseDirection_pitch
{
public:
  explicit Init_PoseDirection_pitch(::messages_fr3::msg::PoseDirection & msg)
  : msg_(msg)
  {}
  Init_PoseDirection_yaw pitch(::messages_fr3::msg::PoseDirection::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_PoseDirection_yaw(msg_);
  }

private:
  ::messages_fr3::msg::PoseDirection msg_;
};

class Init_PoseDirection_roll
{
public:
  explicit Init_PoseDirection_roll(::messages_fr3::msg::PoseDirection & msg)
  : msg_(msg)
  {}
  Init_PoseDirection_pitch roll(::messages_fr3::msg::PoseDirection::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_PoseDirection_pitch(msg_);
  }

private:
  ::messages_fr3::msg::PoseDirection msg_;
};

class Init_PoseDirection_z
{
public:
  explicit Init_PoseDirection_z(::messages_fr3::msg::PoseDirection & msg)
  : msg_(msg)
  {}
  Init_PoseDirection_roll z(::messages_fr3::msg::PoseDirection::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PoseDirection_roll(msg_);
  }

private:
  ::messages_fr3::msg::PoseDirection msg_;
};

class Init_PoseDirection_y
{
public:
  explicit Init_PoseDirection_y(::messages_fr3::msg::PoseDirection & msg)
  : msg_(msg)
  {}
  Init_PoseDirection_z y(::messages_fr3::msg::PoseDirection::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PoseDirection_z(msg_);
  }

private:
  ::messages_fr3::msg::PoseDirection msg_;
};

class Init_PoseDirection_x
{
public:
  Init_PoseDirection_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseDirection_y x(::messages_fr3::msg::PoseDirection::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PoseDirection_y(msg_);
  }

private:
  ::messages_fr3::msg::PoseDirection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_fr3::msg::PoseDirection>()
{
  return messages_fr3::msg::builder::Init_PoseDirection_x();
}

}  // namespace messages_fr3

#endif  // MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__BUILDER_HPP_
