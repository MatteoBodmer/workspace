// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_fr3:srv/ControllerActivation.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__SRV__DETAIL__CONTROLLER_ACTIVATION__STRUCT_HPP_
#define MESSAGES_FR3__SRV__DETAIL__CONTROLLER_ACTIVATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__messages_fr3__srv__ControllerActivation_Request __attribute__((deprecated))
#else
# define DEPRECATED__messages_fr3__srv__ControllerActivation_Request __declspec(deprecated)
#endif

namespace messages_fr3
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControllerActivation_Request_
{
  using Type = ControllerActivation_Request_<ContainerAllocator>;

  explicit ControllerActivation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->controller_activation = false;
    }
  }

  explicit ControllerActivation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->controller_activation = false;
    }
  }

  // field types and members
  using _controller_activation_type =
    bool;
  _controller_activation_type controller_activation;

  // setters for named parameter idiom
  Type & set__controller_activation(
    const bool & _arg)
  {
    this->controller_activation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_fr3::srv::ControllerActivation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_fr3::srv::ControllerActivation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_fr3::srv::ControllerActivation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_fr3::srv::ControllerActivation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_fr3::srv::ControllerActivation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::srv::ControllerActivation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_fr3::srv::ControllerActivation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::srv::ControllerActivation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_fr3::srv::ControllerActivation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_fr3::srv::ControllerActivation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_fr3__srv__ControllerActivation_Request
    std::shared_ptr<messages_fr3::srv::ControllerActivation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_fr3__srv__ControllerActivation_Request
    std::shared_ptr<messages_fr3::srv::ControllerActivation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerActivation_Request_ & other) const
  {
    if (this->controller_activation != other.controller_activation) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerActivation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerActivation_Request_

// alias to use template instance with default allocator
using ControllerActivation_Request =
  messages_fr3::srv::ControllerActivation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace messages_fr3


#ifndef _WIN32
# define DEPRECATED__messages_fr3__srv__ControllerActivation_Response __attribute__((deprecated))
#else
# define DEPRECATED__messages_fr3__srv__ControllerActivation_Response __declspec(deprecated)
#endif

namespace messages_fr3
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControllerActivation_Response_
{
  using Type = ControllerActivation_Response_<ContainerAllocator>;

  explicit ControllerActivation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ControllerActivation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    messages_fr3::srv::ControllerActivation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_fr3::srv::ControllerActivation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_fr3::srv::ControllerActivation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_fr3::srv::ControllerActivation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_fr3::srv::ControllerActivation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::srv::ControllerActivation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_fr3::srv::ControllerActivation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::srv::ControllerActivation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_fr3::srv::ControllerActivation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_fr3::srv::ControllerActivation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_fr3__srv__ControllerActivation_Response
    std::shared_ptr<messages_fr3::srv::ControllerActivation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_fr3__srv__ControllerActivation_Response
    std::shared_ptr<messages_fr3::srv::ControllerActivation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerActivation_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerActivation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerActivation_Response_

// alias to use template instance with default allocator
using ControllerActivation_Response =
  messages_fr3::srv::ControllerActivation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace messages_fr3

namespace messages_fr3
{

namespace srv
{

struct ControllerActivation
{
  using Request = messages_fr3::srv::ControllerActivation_Request;
  using Response = messages_fr3::srv::ControllerActivation_Response;
};

}  // namespace srv

}  // namespace messages_fr3

#endif  // MESSAGES_FR3__SRV__DETAIL__CONTROLLER_ACTIVATION__STRUCT_HPP_
