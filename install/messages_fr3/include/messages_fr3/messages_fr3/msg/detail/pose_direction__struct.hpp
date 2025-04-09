// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_fr3:msg/PoseDirection.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__STRUCT_HPP_
#define MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__messages_fr3__msg__PoseDirection __attribute__((deprecated))
#else
# define DEPRECATED__messages_fr3__msg__PoseDirection __declspec(deprecated)
#endif

namespace messages_fr3
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseDirection_
{
  using Type = PoseDirection_<ContainerAllocator>;

  explicit PoseDirection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->directionx = 0.0;
      this->directiony = 0.0;
      this->directionz = 0.0;
    }
  }

  explicit PoseDirection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->directionx = 0.0;
      this->directiony = 0.0;
      this->directionz = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _directionx_type =
    double;
  _directionx_type directionx;
  using _directiony_type =
    double;
  _directiony_type directiony;
  using _directionz_type =
    double;
  _directionz_type directionz;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__directionx(
    const double & _arg)
  {
    this->directionx = _arg;
    return *this;
  }
  Type & set__directiony(
    const double & _arg)
  {
    this->directiony = _arg;
    return *this;
  }
  Type & set__directionz(
    const double & _arg)
  {
    this->directionz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_fr3::msg::PoseDirection_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_fr3::msg::PoseDirection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_fr3::msg::PoseDirection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_fr3::msg::PoseDirection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_fr3::msg::PoseDirection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::msg::PoseDirection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_fr3::msg::PoseDirection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::msg::PoseDirection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_fr3::msg::PoseDirection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_fr3::msg::PoseDirection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_fr3__msg__PoseDirection
    std::shared_ptr<messages_fr3::msg::PoseDirection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_fr3__msg__PoseDirection
    std::shared_ptr<messages_fr3::msg::PoseDirection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseDirection_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->directionx != other.directionx) {
      return false;
    }
    if (this->directiony != other.directiony) {
      return false;
    }
    if (this->directionz != other.directionz) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseDirection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseDirection_

// alias to use template instance with default allocator
using PoseDirection =
  messages_fr3::msg::PoseDirection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace messages_fr3

#endif  // MESSAGES_FR3__MSG__DETAIL__POSE_DIRECTION__STRUCT_HPP_
