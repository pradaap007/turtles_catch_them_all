// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_turtle_interface:msg/TurtleProjectArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_turtle_interface/msg/detail/turtle_project_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_turtle_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TurtleProjectArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_turtle_interface::msg::TurtleProjectArray(_init);
}

void TurtleProjectArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_turtle_interface::msg::TurtleProjectArray *>(message_memory);
  typed_message->~TurtleProjectArray();
}

size_t size_function__TurtleProjectArray__turtles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<my_turtle_interface::msg::TurtleProject> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TurtleProjectArray__turtles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<my_turtle_interface::msg::TurtleProject> *>(untyped_member);
  return &member[index];
}

void * get_function__TurtleProjectArray__turtles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<my_turtle_interface::msg::TurtleProject> *>(untyped_member);
  return &member[index];
}

void fetch_function__TurtleProjectArray__turtles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const my_turtle_interface::msg::TurtleProject *>(
    get_const_function__TurtleProjectArray__turtles(untyped_member, index));
  auto & value = *reinterpret_cast<my_turtle_interface::msg::TurtleProject *>(untyped_value);
  value = item;
}

void assign_function__TurtleProjectArray__turtles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<my_turtle_interface::msg::TurtleProject *>(
    get_function__TurtleProjectArray__turtles(untyped_member, index));
  const auto & value = *reinterpret_cast<const my_turtle_interface::msg::TurtleProject *>(untyped_value);
  item = value;
}

void resize_function__TurtleProjectArray__turtles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<my_turtle_interface::msg::TurtleProject> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TurtleProjectArray_message_member_array[1] = {
  {
    "turtles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_turtle_interface::msg::TurtleProject>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_turtle_interface::msg::TurtleProjectArray, turtles),  // bytes offset in struct
    nullptr,  // default value
    size_function__TurtleProjectArray__turtles,  // size() function pointer
    get_const_function__TurtleProjectArray__turtles,  // get_const(index) function pointer
    get_function__TurtleProjectArray__turtles,  // get(index) function pointer
    fetch_function__TurtleProjectArray__turtles,  // fetch(index, &value) function pointer
    assign_function__TurtleProjectArray__turtles,  // assign(index, value) function pointer
    resize_function__TurtleProjectArray__turtles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TurtleProjectArray_message_members = {
  "my_turtle_interface::msg",  // message namespace
  "TurtleProjectArray",  // message name
  1,  // number of fields
  sizeof(my_turtle_interface::msg::TurtleProjectArray),
  TurtleProjectArray_message_member_array,  // message members
  TurtleProjectArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleProjectArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TurtleProjectArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TurtleProjectArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_turtle_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_turtle_interface::msg::TurtleProjectArray>()
{
  return &::my_turtle_interface::msg::rosidl_typesupport_introspection_cpp::TurtleProjectArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_turtle_interface, msg, TurtleProjectArray)() {
  return &::my_turtle_interface::msg::rosidl_typesupport_introspection_cpp::TurtleProjectArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
