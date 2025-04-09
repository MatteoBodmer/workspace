// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_fr3:msg/JacobianEE.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__DETAIL__JACOBIAN_EE__STRUCT_HPP_
#define MESSAGES_FR3__MSG__DETAIL__JACOBIAN_EE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__messages_fr3__msg__JacobianEE __attribute__((deprecated))
#else
# define DEPRECATED__messages_fr3__msg__JacobianEE __declspec(deprecated)
#endif

namespace messages_fr3
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JacobianEE_
{
  using Type = JacobianEE_<ContainerAllocator>;

  explicit JacobianEE_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 42>::iterator, double>(this->jacobianee.begin(), this->jacobianee.end(), 0.0);
      std::fill<typename std::array<double, 42>::iterator, double>(this->dtjacobianee.begin(), this->dtjacobianee.end(), 0.0);
    }
  }

  explicit JacobianEE_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : jacobianee(_alloc),
    dtjacobianee(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 42>::iterator, double>(this->jacobianee.begin(), this->jacobianee.end(), 0.0);
      std::fill<typename std::array<double, 42>::iterator, double>(this->dtjacobianee.begin(), this->dtjacobianee.end(), 0.0);
    }
  }

  // field types and members
  using _jacobianee_type =
    std::array<double, 42>;
  _jacobianee_type jacobianee;
  using _dtjacobianee_type =
    std::array<double, 42>;
  _dtjacobianee_type dtjacobianee;

  // setters for named parameter idiom
  Type & set__jacobianee(
    const std::array<double, 42> & _arg)
  {
    this->jacobianee = _arg;
    return *this;
  }
  Type & set__dtjacobianee(
    const std::array<double, 42> & _arg)
  {
    this->dtjacobianee = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_fr3::msg::JacobianEE_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_fr3::msg::JacobianEE_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_fr3::msg::JacobianEE_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_fr3::msg::JacobianEE_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_fr3::msg::JacobianEE_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::msg::JacobianEE_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_fr3::msg::JacobianEE_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::msg::JacobianEE_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_fr3::msg::JacobianEE_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_fr3::msg::JacobianEE_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_fr3__msg__JacobianEE
    std::shared_ptr<messages_fr3::msg::JacobianEE_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_fr3__msg__JacobianEE
    std::shared_ptr<messages_fr3::msg::JacobianEE_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JacobianEE_ & other) const
  {
    if (this->jacobianee != other.jacobianee) {
      return false;
    }
    if (this->dtjacobianee != other.dtjacobianee) {
      return false;
    }
    return true;
  }
  bool operator!=(const JacobianEE_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JacobianEE_

// alias to use template instance with default allocator
using JacobianEE =
  messages_fr3::msg::JacobianEE_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace messages_fr3

#endif  // MESSAGES_FR3__MSG__DETAIL__JACOBIAN_EE__STRUCT_HPP_
