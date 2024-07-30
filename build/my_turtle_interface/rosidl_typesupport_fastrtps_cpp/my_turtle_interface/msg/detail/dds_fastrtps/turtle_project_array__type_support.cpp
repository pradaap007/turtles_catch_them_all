// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_turtle_interface:msg/TurtleProjectArray.idl
// generated code does not contain a copyright notice
#include "my_turtle_interface/msg/detail/turtle_project_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_turtle_interface/msg/detail/turtle_project_array__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace my_turtle_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const my_turtle_interface::msg::TurtleProject &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  my_turtle_interface::msg::TurtleProject &);
size_t get_serialized_size(
  const my_turtle_interface::msg::TurtleProject &,
  size_t current_alignment);
size_t
max_serialized_size_TurtleProject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace my_turtle_interface


namespace my_turtle_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_turtle_interface
cdr_serialize(
  const my_turtle_interface::msg::TurtleProjectArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: turtles
  {
    size_t size = ros_message.turtles.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      my_turtle_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.turtles[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_turtle_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_turtle_interface::msg::TurtleProjectArray & ros_message)
{
  // Member: turtles
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.turtles.resize(size);
    for (size_t i = 0; i < size; i++) {
      my_turtle_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.turtles[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_turtle_interface
get_serialized_size(
  const my_turtle_interface::msg::TurtleProjectArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: turtles
  {
    size_t array_size = ros_message.turtles.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        my_turtle_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.turtles[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_turtle_interface
max_serialized_size_TurtleProjectArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: turtles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        my_turtle_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_TurtleProject(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_turtle_interface::msg::TurtleProjectArray;
    is_plain =
      (
      offsetof(DataType, turtles) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TurtleProjectArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_turtle_interface::msg::TurtleProjectArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TurtleProjectArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_turtle_interface::msg::TurtleProjectArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TurtleProjectArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_turtle_interface::msg::TurtleProjectArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TurtleProjectArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TurtleProjectArray(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TurtleProjectArray__callbacks = {
  "my_turtle_interface::msg",
  "TurtleProjectArray",
  _TurtleProjectArray__cdr_serialize,
  _TurtleProjectArray__cdr_deserialize,
  _TurtleProjectArray__get_serialized_size,
  _TurtleProjectArray__max_serialized_size
};

static rosidl_message_type_support_t _TurtleProjectArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TurtleProjectArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_turtle_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_turtle_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<my_turtle_interface::msg::TurtleProjectArray>()
{
  return &my_turtle_interface::msg::typesupport_fastrtps_cpp::_TurtleProjectArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_turtle_interface, msg, TurtleProjectArray)() {
  return &my_turtle_interface::msg::typesupport_fastrtps_cpp::_TurtleProjectArray__handle;
}

#ifdef __cplusplus
}
#endif
