// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_turtle_interface:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef MY_TURTLE_INTERFACE__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
#define MY_TURTLE_INTERFACE__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_turtle_interface/srv/detail/catch_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_turtle_interface
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Request_name
{
public:
  Init_CatchTurtle_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_turtle_interface::srv::CatchTurtle_Request name(::my_turtle_interface::srv::CatchTurtle_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_turtle_interface::srv::CatchTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_turtle_interface::srv::CatchTurtle_Request>()
{
  return my_turtle_interface::srv::builder::Init_CatchTurtle_Request_name();
}

}  // namespace my_turtle_interface


namespace my_turtle_interface
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Response_success
{
public:
  Init_CatchTurtle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_turtle_interface::srv::CatchTurtle_Response success(::my_turtle_interface::srv::CatchTurtle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_turtle_interface::srv::CatchTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_turtle_interface::srv::CatchTurtle_Response>()
{
  return my_turtle_interface::srv::builder::Init_CatchTurtle_Response_success();
}

}  // namespace my_turtle_interface

#endif  // MY_TURTLE_INTERFACE__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
