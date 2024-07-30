// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_turtle_interface:msg/TurtleProjectArray.idl
// generated code does not contain a copyright notice

#ifndef MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__FUNCTIONS_H_
#define MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_turtle_interface/msg/rosidl_generator_c__visibility_control.h"

#include "my_turtle_interface/msg/detail/turtle_project_array__struct.h"

/// Initialize msg/TurtleProjectArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_turtle_interface__msg__TurtleProjectArray
 * )) before or use
 * my_turtle_interface__msg__TurtleProjectArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_interface
bool
my_turtle_interface__msg__TurtleProjectArray__init(my_turtle_interface__msg__TurtleProjectArray * msg);

/// Finalize msg/TurtleProjectArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_interface
void
my_turtle_interface__msg__TurtleProjectArray__fini(my_turtle_interface__msg__TurtleProjectArray * msg);

/// Create msg/TurtleProjectArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_turtle_interface__msg__TurtleProjectArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_interface
my_turtle_interface__msg__TurtleProjectArray *
my_turtle_interface__msg__TurtleProjectArray__create();

/// Destroy msg/TurtleProjectArray message.
/**
 * It calls
 * my_turtle_interface__msg__TurtleProjectArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_interface
void
my_turtle_interface__msg__TurtleProjectArray__destroy(my_turtle_interface__msg__TurtleProjectArray * msg);

/// Check for msg/TurtleProjectArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_interface
bool
my_turtle_interface__msg__TurtleProjectArray__are_equal(const my_turtle_interface__msg__TurtleProjectArray * lhs, const my_turtle_interface__msg__TurtleProjectArray * rhs);

/// Copy a msg/TurtleProjectArray message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_interface
bool
my_turtle_interface__msg__TurtleProjectArray__copy(
  const my_turtle_interface__msg__TurtleProjectArray * input,
  my_turtle_interface__msg__TurtleProjectArray * output);

/// Initialize array of msg/TurtleProjectArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_turtle_interface__msg__TurtleProjectArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_interface
bool
my_turtle_interface__msg__TurtleProjectArray__Sequence__init(my_turtle_interface__msg__TurtleProjectArray__Sequence * array, size_t size);

/// Finalize array of msg/TurtleProjectArray messages.
/**
 * It calls
 * my_turtle_interface__msg__TurtleProjectArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_interface
void
my_turtle_interface__msg__TurtleProjectArray__Sequence__fini(my_turtle_interface__msg__TurtleProjectArray__Sequence * array);

/// Create array of msg/TurtleProjectArray messages.
/**
 * It allocates the memory for the array and calls
 * my_turtle_interface__msg__TurtleProjectArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_interface
my_turtle_interface__msg__TurtleProjectArray__Sequence *
my_turtle_interface__msg__TurtleProjectArray__Sequence__create(size_t size);

/// Destroy array of msg/TurtleProjectArray messages.
/**
 * It calls
 * my_turtle_interface__msg__TurtleProjectArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_interface
void
my_turtle_interface__msg__TurtleProjectArray__Sequence__destroy(my_turtle_interface__msg__TurtleProjectArray__Sequence * array);

/// Check for msg/TurtleProjectArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_interface
bool
my_turtle_interface__msg__TurtleProjectArray__Sequence__are_equal(const my_turtle_interface__msg__TurtleProjectArray__Sequence * lhs, const my_turtle_interface__msg__TurtleProjectArray__Sequence * rhs);

/// Copy an array of msg/TurtleProjectArray messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_interface
bool
my_turtle_interface__msg__TurtleProjectArray__Sequence__copy(
  const my_turtle_interface__msg__TurtleProjectArray__Sequence * input,
  my_turtle_interface__msg__TurtleProjectArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_TURTLE_INTERFACE__MSG__DETAIL__TURTLE_PROJECT_ARRAY__FUNCTIONS_H_
