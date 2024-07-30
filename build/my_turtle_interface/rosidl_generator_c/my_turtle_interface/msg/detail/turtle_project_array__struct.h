// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_turtle_interface:msg/TurtleProjectArray.idl
// generated code does not contain a copyright notice

#ifndef MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__STRUCT_H_
#define MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turtles'
#include "my_turtle_interface/msg/detail/turtle_project__struct.h"

/// Struct defined in msg/TurtleProjectArray in the package my_turtle_interface.
typedef struct my_turtle_interface__msg__TurtleProjectArray
{
  my_turtle_interface__msg__TurtleProject__Sequence turtles;
} my_turtle_interface__msg__TurtleProjectArray;

// Struct for a sequence of my_turtle_interface__msg__TurtleProjectArray.
typedef struct my_turtle_interface__msg__TurtleProjectArray__Sequence
{
  my_turtle_interface__msg__TurtleProjectArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_turtle_interface__msg__TurtleProjectArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__STRUCT_H_
