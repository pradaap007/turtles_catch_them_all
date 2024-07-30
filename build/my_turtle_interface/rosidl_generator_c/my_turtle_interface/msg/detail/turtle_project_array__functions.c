// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_turtle_interface:msg/TurtleProjectArray.idl
// generated code does not contain a copyright notice
#include "my_turtle_interface/msg/detail/turtle_project_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `turtles`
#include "my_turtle_interface/msg/detail/turtle_project__functions.h"

bool
my_turtle_interface__msg__TurtleProjectArray__init(my_turtle_interface__msg__TurtleProjectArray * msg)
{
  if (!msg) {
    return false;
  }
  // turtles
  if (!my_turtle_interface__msg__TurtleProject__Sequence__init(&msg->turtles, 0)) {
    my_turtle_interface__msg__TurtleProjectArray__fini(msg);
    return false;
  }
  return true;
}

void
my_turtle_interface__msg__TurtleProjectArray__fini(my_turtle_interface__msg__TurtleProjectArray * msg)
{
  if (!msg) {
    return;
  }
  // turtles
  my_turtle_interface__msg__TurtleProject__Sequence__fini(&msg->turtles);
}

bool
my_turtle_interface__msg__TurtleProjectArray__are_equal(const my_turtle_interface__msg__TurtleProjectArray * lhs, const my_turtle_interface__msg__TurtleProjectArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // turtles
  if (!my_turtle_interface__msg__TurtleProject__Sequence__are_equal(
      &(lhs->turtles), &(rhs->turtles)))
  {
    return false;
  }
  return true;
}

bool
my_turtle_interface__msg__TurtleProjectArray__copy(
  const my_turtle_interface__msg__TurtleProjectArray * input,
  my_turtle_interface__msg__TurtleProjectArray * output)
{
  if (!input || !output) {
    return false;
  }
  // turtles
  if (!my_turtle_interface__msg__TurtleProject__Sequence__copy(
      &(input->turtles), &(output->turtles)))
  {
    return false;
  }
  return true;
}

my_turtle_interface__msg__TurtleProjectArray *
my_turtle_interface__msg__TurtleProjectArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_turtle_interface__msg__TurtleProjectArray * msg = (my_turtle_interface__msg__TurtleProjectArray *)allocator.allocate(sizeof(my_turtle_interface__msg__TurtleProjectArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_turtle_interface__msg__TurtleProjectArray));
  bool success = my_turtle_interface__msg__TurtleProjectArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_turtle_interface__msg__TurtleProjectArray__destroy(my_turtle_interface__msg__TurtleProjectArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_turtle_interface__msg__TurtleProjectArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_turtle_interface__msg__TurtleProjectArray__Sequence__init(my_turtle_interface__msg__TurtleProjectArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_turtle_interface__msg__TurtleProjectArray * data = NULL;

  if (size) {
    data = (my_turtle_interface__msg__TurtleProjectArray *)allocator.zero_allocate(size, sizeof(my_turtle_interface__msg__TurtleProjectArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_turtle_interface__msg__TurtleProjectArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_turtle_interface__msg__TurtleProjectArray__fini(&data[i - 1]);
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
my_turtle_interface__msg__TurtleProjectArray__Sequence__fini(my_turtle_interface__msg__TurtleProjectArray__Sequence * array)
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
      my_turtle_interface__msg__TurtleProjectArray__fini(&array->data[i]);
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

my_turtle_interface__msg__TurtleProjectArray__Sequence *
my_turtle_interface__msg__TurtleProjectArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_turtle_interface__msg__TurtleProjectArray__Sequence * array = (my_turtle_interface__msg__TurtleProjectArray__Sequence *)allocator.allocate(sizeof(my_turtle_interface__msg__TurtleProjectArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_turtle_interface__msg__TurtleProjectArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_turtle_interface__msg__TurtleProjectArray__Sequence__destroy(my_turtle_interface__msg__TurtleProjectArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_turtle_interface__msg__TurtleProjectArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_turtle_interface__msg__TurtleProjectArray__Sequence__are_equal(const my_turtle_interface__msg__TurtleProjectArray__Sequence * lhs, const my_turtle_interface__msg__TurtleProjectArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_turtle_interface__msg__TurtleProjectArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_turtle_interface__msg__TurtleProjectArray__Sequence__copy(
  const my_turtle_interface__msg__TurtleProjectArray__Sequence * input,
  my_turtle_interface__msg__TurtleProjectArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_turtle_interface__msg__TurtleProjectArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_turtle_interface__msg__TurtleProjectArray * data =
      (my_turtle_interface__msg__TurtleProjectArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_turtle_interface__msg__TurtleProjectArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_turtle_interface__msg__TurtleProjectArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_turtle_interface__msg__TurtleProjectArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
