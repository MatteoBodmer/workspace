// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_fr3:srv/SetMode.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__SRV__DETAIL__SET_MODE__STRUCT_HPP_
#define MESSAGES_FR3__SRV__DETAIL__SET_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__messages_fr3__srv__SetMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__messages_fr3__srv__SetMode_Request __declspec(deprecated)
#endif

namespace messages_fr3
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMode_Request_
{
  using Type = SetMode_Request_<ContainerAllocator>;

  explicit SetMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = false;
    }
  }

  explicit SetMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = false;
    }
  }

  // field types and members
  using _mode_type =
    bool;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__mode(
    const bool & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_fr3::srv::SetMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_fr3::srv::SetMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_fr3::srv::SetMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_fr3::srv::SetMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_fr3::srv::SetMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::srv::SetMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_fr3::srv::SetMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::srv::SetMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_fr3::srv::SetMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_fr3::srv::SetMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_fr3__srv__SetMode_Request
    std::shared_ptr<messages_fr3::srv::SetMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_fr3__srv__SetMode_Request
    std::shared_ptr<messages_fr3::srv::SetMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMode_Request_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMode_Request_

// alias to use template instance with default allocator
using SetMode_Request =
  messages_fr3::srv::SetMode_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace messages_fr3


#ifndef _WIN32
# define DEPRECATED__messages_fr3__srv__SetMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__messages_fr3__srv__SetMode_Response __declspec(deprecated)
#endif

namespace messages_fr3
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMode_Response_
{
  using Type = SetMode_Response_<ContainerAllocator>;

  explicit SetMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  explicit SetMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_fr3::srv::SetMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_fr3::srv::SetMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_fr3::srv::SetMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_fr3::srv::SetMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_fr3::srv::SetMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::srv::SetMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_fr3::srv::SetMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_fr3::srv::SetMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_fr3::srv::SetMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_fr3::srv::SetMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_fr3__srv__SetMode_Response
    std::shared_ptr<messages_fr3::srv::SetMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_fr3__srv__SetMode_Response
    std::shared_ptr<messages_fr3::srv::SetMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMode_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMode_Response_

// alias to use template instance with default allocator
using SetMode_Response =
  messages_fr3::srv::SetMode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace messages_fr3

namespace messages_fr3
{

namespace srv
{

struct SetMode
{
  using Request = messages_fr3::srv::SetMode_Request;
  using Response = messages_fr3::srv::SetMode_Response;
};

}  // namespace srv

}  // namespace messages_fr3

#endif  // MESSAGES_FR3__SRV__DETAIL__SET_MODE__STRUCT_HPP_
