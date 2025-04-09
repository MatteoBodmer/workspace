// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_fr3:msg/JointEEState.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__JOINT_EE_STATE__STRUCT_HPP_
#define MESSAGES_FR3__MSG__DETAIL__JOINT_EE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__messages_fr3__msg__JointEEState __attribute__((deprecated))
#else
# define DEPRECATED__messages_fr3__msg__JointEEState __declspec(deprecated)
#endif

namespace messages_fr3
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointEEState_
{
  using Type = JointEEState_<ContainerAllocator>;

  explicit JointEEState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->jointzacceleration = 0.0;
    }
  }

  explicit JointEEState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->jointzacceleration = 0.0;
    }
  }

  // field types and members
  using _jointzacceleration_type =
    double;
  _jointzacceleration_type jointzacceleration;

  // setters for named parameter idiom
  Type & set__jointzacceleration(
    const double & _arg)
  {
    this->jointzacceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_fr3::msg::JointEEState_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_fr3::msg::JointEEState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_fr3::msg::JointEEState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_fr3::msg::JointEEState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_fr3::msg::JointEEState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::msg::JointEEState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_fr3::msg::JointEEState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::msg::JointEEState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_fr3::msg::JointEEState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_fr3::msg::JointEEState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_fr3__msg__JointEEState
    std::shared_ptr<messages_fr3::msg::JointEEState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_fr3__msg__JointEEState
    std::shared_ptr<messages_fr3::msg::JointEEState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointEEState_ & other) const
  {
    if (this->jointzacceleration != other.jointzacceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointEEState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointEEState_

// alias to use template instance with default allocator
using JointEEState =
  messages_fr3::msg::JointEEState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace messages_fr3

#endif  // MESSAGES_FR3__MSG__DETAIL__JOINT_EE_STATE__STRUCT_HPP_
