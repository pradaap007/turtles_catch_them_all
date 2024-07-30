// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_turtle_interface:msg/TurtleProjectArray.idl
// generated code does not contain a copyright notice

#ifndef MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__TRAITS_HPP_
#define MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_turtle_interface/msg/detail/turtle_project_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'turtles'
#include "my_turtle_interface/msg/detail/turtle_project__traits.hpp"

namespace my_turtle_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const TurtleProjectArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: turtles
  {
    if (msg.turtles.size() == 0) {
      out << "turtles: []";
    } else {
      out << "turtles: [";
      size_t pending_items = msg.turtles.size();
      for (auto item : msg.turtles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleProjectArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turtles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.turtles.size() == 0) {
      out << "turtles: []\n";
    } else {
      out << "turtles:\n";
      for (auto item : msg.turtles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleProjectArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_turtle_interface

namespace rosidl_generator_traits
{

[[deprecated("use my_turtle_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_turtle_interface::msg::TurtleProjectArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_turtle_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_turtle_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_turtle_interface::msg::TurtleProjectArray & msg)
{
  return my_turtle_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_turtle_interface::msg::TurtleProjectArray>()
{
  return "my_turtle_interface::msg::TurtleProjectArray";
}

template<>
inline const char * name<my_turtle_interface::msg::TurtleProjectArray>()
{
  return "my_turtle_interface/msg/TurtleProjectArray";
}

template<>
struct has_fixed_size<my_turtle_interface::msg::TurtleProjectArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_turtle_interface::msg::TurtleProjectArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_turtle_interface::msg::TurtleProjectArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__TRAITS_HPP_
