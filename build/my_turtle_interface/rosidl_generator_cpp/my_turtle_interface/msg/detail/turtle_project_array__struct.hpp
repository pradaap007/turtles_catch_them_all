// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_turtle_interface:msg/TurtleProjectArray.idl
// generated code does not contain a copyright notice

#ifndef MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__STRUCT_HPP_
#define MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'turtles'
#include "my_turtle_interface/msg/detail/turtle_project__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_turtle_interface__msg__TurtleProjectArray __attribute__((deprecated))
#else
# define DEPRECATED__my_turtle_interface__msg__TurtleProjectArray __declspec(deprecated)
#endif

namespace my_turtle_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurtleProjectArray_
{
  using Type = TurtleProjectArray_<ContainerAllocator>;

  explicit TurtleProjectArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TurtleProjectArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _turtles_type =
    std::vector<my_turtle_interface::msg::TurtleProject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_turtle_interface::msg::TurtleProject_<ContainerAllocator>>>;
  _turtles_type turtles;

  // setters for named parameter idiom
  Type & set__turtles(
    const std::vector<my_turtle_interface::msg::TurtleProject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_turtle_interface::msg::TurtleProject_<ContainerAllocator>>> & _arg)
  {
    this->turtles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_turtle_interface::msg::TurtleProjectArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_turtle_interface::msg::TurtleProjectArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_turtle_interface::msg::TurtleProjectArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_turtle_interface::msg::TurtleProjectArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_turtle_interface::msg::TurtleProjectArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_turtle_interface::msg::TurtleProjectArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_turtle_interface::msg::TurtleProjectArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_turtle_interface::msg::TurtleProjectArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_turtle_interface::msg::TurtleProjectArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_turtle_interface::msg::TurtleProjectArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_turtle_interface__msg__TurtleProjectArray
    std::shared_ptr<my_turtle_interface::msg::TurtleProjectArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_turtle_interface__msg__TurtleProjectArray
    std::shared_ptr<my_turtle_interface::msg::TurtleProjectArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleProjectArray_ & other) const
  {
    if (this->turtles != other.turtles) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleProjectArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleProjectArray_

// alias to use template instance with default allocator
using TurtleProjectArray =
  my_turtle_interface::msg::TurtleProjectArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_turtle_interface

#endif  // MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__STRUCT_HPP_
