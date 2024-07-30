// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_turtle_interface:msg/TurtleProjectArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_turtle_interface/msg/detail/turtle_project_array__rosidl_typesupport_introspection_c.h"
#include "my_turtle_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_turtle_interface/msg/detail/turtle_project_array__functions.h"
#include "my_turtle_interface/msg/detail/turtle_project_array__struct.h"


// Include directives for member types
// Member `turtles`
#include "my_turtle_interface/msg/turtle_project.h"
// Member `turtles`
#include "my_turtle_interface/msg/detail/turtle_project__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__TurtleProjectArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_turtle_interface__msg__TurtleProjectArray__init(message_memory);
}

void my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__TurtleProjectArray_fini_function(void * message_memory)
{
  my_turtle_interface__msg__TurtleProjectArray__fini(message_memory);
}

size_t my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__size_function__TurtleProjectArray__turtles(
  const void * untyped_member)
{
  const my_turtle_interface__msg__TurtleProject__Sequence * member =
    (const my_turtle_interface__msg__TurtleProject__Sequence *)(untyped_member);
  return member->size;
}

const void * my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__get_const_function__TurtleProjectArray__turtles(
  const void * untyped_member, size_t index)
{
  const my_turtle_interface__msg__TurtleProject__Sequence * member =
    (const my_turtle_interface__msg__TurtleProject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__get_function__TurtleProjectArray__turtles(
  void * untyped_member, size_t index)
{
  my_turtle_interface__msg__TurtleProject__Sequence * member =
    (my_turtle_interface__msg__TurtleProject__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__fetch_function__TurtleProjectArray__turtles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const my_turtle_interface__msg__TurtleProject * item =
    ((const my_turtle_interface__msg__TurtleProject *)
    my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__get_const_function__TurtleProjectArray__turtles(untyped_member, index));
  my_turtle_interface__msg__TurtleProject * value =
    (my_turtle_interface__msg__TurtleProject *)(untyped_value);
  *value = *item;
}

void my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__assign_function__TurtleProjectArray__turtles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  my_turtle_interface__msg__TurtleProject * item =
    ((my_turtle_interface__msg__TurtleProject *)
    my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__get_function__TurtleProjectArray__turtles(untyped_member, index));
  const my_turtle_interface__msg__TurtleProject * value =
    (const my_turtle_interface__msg__TurtleProject *)(untyped_value);
  *item = *value;
}

bool my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__resize_function__TurtleProjectArray__turtles(
  void * untyped_member, size_t size)
{
  my_turtle_interface__msg__TurtleProject__Sequence * member =
    (my_turtle_interface__msg__TurtleProject__Sequence *)(untyped_member);
  my_turtle_interface__msg__TurtleProject__Sequence__fini(member);
  return my_turtle_interface__msg__TurtleProject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__TurtleProjectArray_message_member_array[1] = {
  {
    "turtles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_turtle_interface__msg__TurtleProjectArray, turtles),  // bytes offset in struct
    NULL,  // default value
    my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__size_function__TurtleProjectArray__turtles,  // size() function pointer
    my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__get_const_function__TurtleProjectArray__turtles,  // get_const(index) function pointer
    my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__get_function__TurtleProjectArray__turtles,  // get(index) function pointer
    my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__fetch_function__TurtleProjectArray__turtles,  // fetch(index, &value) function pointer
    my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__assign_function__TurtleProjectArray__turtles,  // assign(index, value) function pointer
    my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__resize_function__TurtleProjectArray__turtles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__TurtleProjectArray_message_members = {
  "my_turtle_interface__msg",  // message namespace
  "TurtleProjectArray",  // message name
  1,  // number of fields
  sizeof(my_turtle_interface__msg__TurtleProjectArray),
  my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__TurtleProjectArray_message_member_array,  // message members
  my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__TurtleProjectArray_init_function,  // function to initialize message memory (memory has to be allocated)
  my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__TurtleProjectArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__TurtleProjectArray_message_type_support_handle = {
  0,
  &my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__TurtleProjectArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_turtle_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_turtle_interface, msg, TurtleProjectArray)() {
  my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__TurtleProjectArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_turtle_interface, msg, TurtleProject)();
  if (!my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__TurtleProjectArray_message_type_support_handle.typesupport_identifier) {
    my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__TurtleProjectArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_turtle_interface__msg__TurtleProjectArray__rosidl_typesupport_introspection_c__TurtleProjectArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
