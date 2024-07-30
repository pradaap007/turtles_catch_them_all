// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_turtle_interface:srv/TurtleKiller.idl
// generated code does not contain a copyright notice

#ifndef MY_TURTLE_INTERFACE__SRV__DETAIL__TURTLE_KILLER__STRUCT_HPP_
#define MY_TURTLE_INTERFACE__SRV__DETAIL__TURTLE_KILLER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_turtle_interface__srv__TurtleKiller_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_turtle_interface__srv__TurtleKiller_Request __declspec(deprecated)
#endif

namespace my_turtle_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurtleKiller_Request_
{
  using Type = TurtleKiller_Request_<ContainerAllocator>;

  explicit TurtleKiller_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit TurtleKiller_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_turtle_interface::srv::TurtleKiller_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_turtle_interface::srv::TurtleKiller_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_turtle_interface::srv::TurtleKiller_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_turtle_interface::srv::TurtleKiller_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_turtle_interface::srv::TurtleKiller_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_turtle_interface::srv::TurtleKiller_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_turtle_interface::srv::TurtleKiller_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_turtle_interface::srv::TurtleKiller_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_turtle_interface::srv::TurtleKiller_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_turtle_interface::srv::TurtleKiller_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_turtle_interface__srv__TurtleKiller_Request
    std::shared_ptr<my_turtle_interface::srv::TurtleKiller_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_turtle_interface__srv__TurtleKiller_Request
    std::shared_ptr<my_turtle_interface::srv::TurtleKiller_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleKiller_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleKiller_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleKiller_Request_

// alias to use template instance with default allocator
using TurtleKiller_Request =
  my_turtle_interface::srv::TurtleKiller_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_turtle_interface


#ifndef _WIN32
# define DEPRECATED__my_turtle_interface__srv__TurtleKiller_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_turtle_interface__srv__TurtleKiller_Response __declspec(deprecated)
#endif

namespace my_turtle_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurtleKiller_Response_
{
  using Type = TurtleKiller_Response_<ContainerAllocator>;

  explicit TurtleKiller_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit TurtleKiller_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    my_turtle_interface::srv::TurtleKiller_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_turtle_interface::srv::TurtleKiller_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_turtle_interface::srv::TurtleKiller_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_turtle_interface::srv::TurtleKiller_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_turtle_interface::srv::TurtleKiller_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_turtle_interface::srv::TurtleKiller_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_turtle_interface::srv::TurtleKiller_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_turtle_interface::srv::TurtleKiller_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_turtle_interface::srv::TurtleKiller_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_turtle_interface::srv::TurtleKiller_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_turtle_interface__srv__TurtleKiller_Response
    std::shared_ptr<my_turtle_interface::srv::TurtleKiller_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_turtle_interface__srv__TurtleKiller_Response
    std::shared_ptr<my_turtle_interface::srv::TurtleKiller_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleKiller_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleKiller_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleKiller_Response_

// alias to use template instance with default allocator
using TurtleKiller_Response =
  my_turtle_interface::srv::TurtleKiller_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_turtle_interface

namespace my_turtle_interface
{

namespace srv
{

struct TurtleKiller
{
  using Request = my_turtle_interface::srv::TurtleKiller_Request;
  using Response = my_turtle_interface::srv::TurtleKiller_Response;
};

}  // namespace srv

}  // namespace my_turtle_interface

#endif  // MY_TURTLE_INTERFACE__SRV__DETAIL__TURTLE_KILLER__STRUCT_HPP_
