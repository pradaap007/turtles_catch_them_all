// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_turtle_interface:msg/TurtleProject.idl
// generated code does not contain a copyright notice
#include "my_turtle_interface/msg/detail/turtle_project__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
my_turtle_interface__msg__TurtleProject__init(my_turtle_interface__msg__TurtleProject * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    my_turtle_interface__msg__TurtleProject__fini(msg);
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
my_turtle_interface__msg__TurtleProject__fini(my_turtle_interface__msg__TurtleProject * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // x
  // y
  // theta
}

bool
my_turtle_interface__msg__TurtleProject__are_equal(const my_turtle_interface__msg__TurtleProject * lhs, const my_turtle_interface__msg__TurtleProject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
my_turtle_interface__msg__TurtleProject__copy(
  const my_turtle_interface__msg__TurtleProject * input,
  my_turtle_interface__msg__TurtleProject * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  return true;
}

my_turtle_interface__msg__TurtleProject *
my_turtle_interface__msg__TurtleProject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_turtle_interface__msg__TurtleProject * msg = (my_turtle_interface__msg__TurtleProject *)allocator.allocate(sizeof(my_turtle_interface__msg__TurtleProject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_turtle_interface__msg__TurtleProject));
  bool success = my_turtle_interface__msg__TurtleProject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_turtle_interface__msg__TurtleProject__destroy(my_turtle_interface__msg__TurtleProject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_turtle_interface__msg__TurtleProject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_turtle_interface__msg__TurtleProject__Sequence__init(my_turtle_interface__msg__TurtleProject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_turtle_interface__msg__TurtleProject * data = NULL;

  if (size) {
    data = (my_turtle_interface__msg__TurtleProject *)allocator.zero_allocate(size, sizeof(my_turtle_interface__msg__TurtleProject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_turtle_interface__msg__TurtleProject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_turtle_interface__msg__TurtleProject__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_turtle_interface__msg__TurtleProject__Sequence__fini(my_turtle_interface__msg__TurtleProject__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_turtle_interface__msg__TurtleProject__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_turtle_interface__msg__TurtleProject__Sequence *
my_turtle_interface__msg__TurtleProject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_turtle_interface__msg__TurtleProject__Sequence * array = (my_turtle_interface__msg__TurtleProject__Sequence *)allocator.allocate(sizeof(my_turtle_interface__msg__TurtleProject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_turtle_interface__msg__TurtleProject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_turtle_interface__msg__TurtleProject__Sequence__destroy(my_turtle_interface__msg__TurtleProject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_turtle_interface__msg__TurtleProject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_turtle_interface__msg__TurtleProject__Sequence__are_equal(const my_turtle_interface__msg__TurtleProject__Sequence * lhs, const my_turtle_interface__msg__TurtleProject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_turtle_interface__msg__TurtleProject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_turtle_interface__msg__TurtleProject__Sequence__copy(
  const my_turtle_interface__msg__TurtleProject__Sequence * input,
  my_turtle_interface__msg__TurtleProject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_turtle_interface__msg__TurtleProject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_turtle_interface__msg__TurtleProject * data =
      (my_turtle_interface__msg__TurtleProject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_turtle_interface__msg__TurtleProject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_turtle_interface__msg__TurtleProject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_turtle_interface__msg__TurtleProject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
