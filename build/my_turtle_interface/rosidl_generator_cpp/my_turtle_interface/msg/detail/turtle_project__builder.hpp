// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_turtle_interface:msg/TurtleProject.idl
// generated code does not contain a copyright notice

#ifndef MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT__BUILDER_HPP_
#define MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_turtle_interface/msg/detail/turtle_project__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_turtle_interface
{

namespace msg
{

namespace builder
{

class Init_TurtleProject_theta
{
public:
  explicit Init_TurtleProject_theta(::my_turtle_interface::msg::TurtleProject & msg)
  : msg_(msg)
  {}
  ::my_turtle_interface::msg::TurtleProject theta(::my_turtle_interface::msg::TurtleProject::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_turtle_interface::msg::TurtleProject msg_;
};

class Init_TurtleProject_y
{
public:
  explicit Init_TurtleProject_y(::my_turtle_interface::msg::TurtleProject & msg)
  : msg_(msg)
  {}
  Init_TurtleProject_theta y(::my_turtle_interface::msg::TurtleProject::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TurtleProject_theta(msg_);
  }

private:
  ::my_turtle_interface::msg::TurtleProject msg_;
};

class Init_TurtleProject_x
{
public:
  explicit Init_TurtleProject_x(::my_turtle_interface::msg::TurtleProject & msg)
  : msg_(msg)
  {}
  Init_TurtleProject_y x(::my_turtle_interface::msg::TurtleProject::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TurtleProject_y(msg_);
  }

private:
  ::my_turtle_interface::msg::TurtleProject msg_;
};

class Init_TurtleProject_name
{
public:
  Init_TurtleProject_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleProject_x name(::my_turtle_interface::msg::TurtleProject::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TurtleProject_x(msg_);
  }

private:
  ::my_turtle_interface::msg::TurtleProject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_turtle_interface::msg::TurtleProject>()
{
  return my_turtle_interface::msg::builder::Init_TurtleProject_name();
}

}  // namespace my_turtle_interface

#endif  // MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT__BUILDER_HPP_
