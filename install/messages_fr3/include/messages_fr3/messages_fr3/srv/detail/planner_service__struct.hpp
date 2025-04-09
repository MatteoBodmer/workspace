// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_fr3:srv/PlannerService.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__SRV__DETAIL__PLANNER_SERVICE__STRUCT_HPP_
#define MESSAGES_FR3__SRV__DETAIL__PLANNER_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__messages_fr3__srv__PlannerService_Request __attribute__((deprecated))
#else
# define DEPRECATED__messages_fr3__srv__PlannerService_Request __declspec(deprecated)
#endif

namespace messages_fr3
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlannerService_Request_
{
  using Type = PlannerService_Request_<ContainerAllocator>;

  explicit PlannerService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit PlannerService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_fr3::srv::PlannerService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_fr3::srv::PlannerService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_fr3::srv::PlannerService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_fr3::srv::PlannerService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_fr3::srv::PlannerService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::srv::PlannerService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_fr3::srv::PlannerService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::srv::PlannerService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_fr3::srv::PlannerService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_fr3::srv::PlannerService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_fr3__srv__PlannerService_Request
    std::shared_ptr<messages_fr3::srv::PlannerService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_fr3__srv__PlannerService_Request
    std::shared_ptr<messages_fr3::srv::PlannerService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlannerService_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlannerService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlannerService_Request_

// alias to use template instance with default allocator
using PlannerService_Request =
  messages_fr3::srv::PlannerService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace messages_fr3


#ifndef _WIN32
# define DEPRECATED__messages_fr3__srv__PlannerService_Response __attribute__((deprecated))
#else
# define DEPRECATED__messages_fr3__srv__PlannerService_Response __declspec(deprecated)
#endif

namespace messages_fr3
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlannerService_Response_
{
  using Type = PlannerService_Response_<ContainerAllocator>;

  explicit PlannerService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit PlannerService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_fr3::srv::PlannerService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_fr3::srv::PlannerService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_fr3::srv::PlannerService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_fr3::srv::PlannerService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_fr3::srv::PlannerService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::srv::PlannerService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_fr3::srv::PlannerService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::srv::PlannerService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_fr3::srv::PlannerService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_fr3::srv::PlannerService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_fr3__srv__PlannerService_Response
    std::shared_ptr<messages_fr3::srv::PlannerService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_fr3__srv__PlannerService_Response
    std::shared_ptr<messages_fr3::srv::PlannerService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlannerService_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlannerService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlannerService_Response_

// alias to use template instance with default allocator
using PlannerService_Response =
  messages_fr3::srv::PlannerService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace messages_fr3

namespace messages_fr3
{

namespace srv
{

struct PlannerService
{
  using Request = messages_fr3::srv::PlannerService_Request;
  using Response = messages_fr3::srv::PlannerService_Response;
};

}  // namespace srv

}  // namespace messages_fr3

#endif  // MESSAGES_FR3__SRV__DETAIL__PLANNER_SERVICE__STRUCT_HPP_
