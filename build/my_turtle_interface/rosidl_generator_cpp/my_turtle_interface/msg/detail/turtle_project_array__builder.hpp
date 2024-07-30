// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_turtle_interface:msg/TurtleProjectArray.idl
// generated code does not contain a copyright notice

#ifndef MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__BUILDER_HPP_
#define MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_turtle_interface/msg/detail/turtle_project_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_turtle_interface
{

namespace msg
{

namespace builder
{

class Init_TurtleProjectArray_turtles
{
public:
  Init_TurtleProjectArray_turtles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_turtle_interface::msg::TurtleProjectArray turtles(::my_turtle_interface::msg::TurtleProjectArray::_turtles_type arg)
  {
    msg_.turtles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_turtle_interface::msg::TurtleProjectArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_turtle_interface::msg::TurtleProjectArray>()
{
  return my_turtle_interface::msg::builder::Init_TurtleProjectArray_turtles();
}

}  // namespace my_turtle_interface

#endif  // MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__BUILDER_HPP_
