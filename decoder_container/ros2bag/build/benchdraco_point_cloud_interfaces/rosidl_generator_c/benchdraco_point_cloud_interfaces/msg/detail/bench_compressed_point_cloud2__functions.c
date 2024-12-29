// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from benchdraco_point_cloud_interfaces:msg/BenchCompressedPointCloud2.idl
// generated code does not contain a copyright notice
#include "benchdraco_point_cloud_interfaces/msg/detail/bench_compressed_point_cloud2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `fields`
#include "sensor_msgs/msg/detail/point_field__functions.h"
// Member `compressed_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `encoding_start_timestamp`
// Member `encoding_finish_timestamp`
// Member `decoding_start_timestamp`
// Member `decoding_finish_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `format`
#include "rosidl_runtime_c/string_functions.h"

bool
benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__init(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__fini(msg);
    return false;
  }
  // height
  // width
  // fields
  if (!sensor_msgs__msg__PointField__Sequence__init(&msg->fields, 0)) {
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__fini(msg);
    return false;
  }
  // is_bigendian
  // point_step
  // row_step
  // compressed_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->compressed_data, 0)) {
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__fini(msg);
    return false;
  }
  // compressed_size
  // raw_size
  // encoding_start_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->encoding_start_timestamp)) {
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__fini(msg);
    return false;
  }
  // encoding_finish_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->encoding_finish_timestamp)) {
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__fini(msg);
    return false;
  }
  // decoding_start_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->decoding_start_timestamp)) {
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__fini(msg);
    return false;
  }
  // decoding_finish_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->decoding_finish_timestamp)) {
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__fini(msg);
    return false;
  }
  // is_dense
  // format
  if (!rosidl_runtime_c__String__init(&msg->format)) {
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__fini(msg);
    return false;
  }
  return true;
}

void
benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__fini(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // height
  // width
  // fields
  sensor_msgs__msg__PointField__Sequence__fini(&msg->fields);
  // is_bigendian
  // point_step
  // row_step
  // compressed_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->compressed_data);
  // compressed_size
  // raw_size
  // encoding_start_timestamp
  builtin_interfaces__msg__Time__fini(&msg->encoding_start_timestamp);
  // encoding_finish_timestamp
  builtin_interfaces__msg__Time__fini(&msg->encoding_finish_timestamp);
  // decoding_start_timestamp
  builtin_interfaces__msg__Time__fini(&msg->decoding_start_timestamp);
  // decoding_finish_timestamp
  builtin_interfaces__msg__Time__fini(&msg->decoding_finish_timestamp);
  // is_dense
  // format
  rosidl_runtime_c__String__fini(&msg->format);
}

bool
benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__are_equal(const benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 * lhs, const benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // fields
  if (!sensor_msgs__msg__PointField__Sequence__are_equal(
      &(lhs->fields), &(rhs->fields)))
  {
    return false;
  }
  // is_bigendian
  if (lhs->is_bigendian != rhs->is_bigendian) {
    return false;
  }
  // point_step
  if (lhs->point_step != rhs->point_step) {
    return false;
  }
  // row_step
  if (lhs->row_step != rhs->row_step) {
    return false;
  }
  // compressed_data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->compressed_data), &(rhs->compressed_data)))
  {
    return false;
  }
  // compressed_size
  if (lhs->compressed_size != rhs->compressed_size) {
    return false;
  }
  // raw_size
  if (lhs->raw_size != rhs->raw_size) {
    return false;
  }
  // encoding_start_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->encoding_start_timestamp), &(rhs->encoding_start_timestamp)))
  {
    return false;
  }
  // encoding_finish_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->encoding_finish_timestamp), &(rhs->encoding_finish_timestamp)))
  {
    return false;
  }
  // decoding_start_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->decoding_start_timestamp), &(rhs->decoding_start_timestamp)))
  {
    return false;
  }
  // decoding_finish_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->decoding_finish_timestamp), &(rhs->decoding_finish_timestamp)))
  {
    return false;
  }
  // is_dense
  if (lhs->is_dense != rhs->is_dense) {
    return false;
  }
  // format
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->format), &(rhs->format)))
  {
    return false;
  }
  return true;
}

bool
benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__copy(
  const benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 * input,
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // height
  output->height = input->height;
  // width
  output->width = input->width;
  // fields
  if (!sensor_msgs__msg__PointField__Sequence__copy(
      &(input->fields), &(output->fields)))
  {
    return false;
  }
  // is_bigendian
  output->is_bigendian = input->is_bigendian;
  // point_step
  output->point_step = input->point_step;
  // row_step
  output->row_step = input->row_step;
  // compressed_data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->compressed_data), &(output->compressed_data)))
  {
    return false;
  }
  // compressed_size
  output->compressed_size = input->compressed_size;
  // raw_size
  output->raw_size = input->raw_size;
  // encoding_start_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->encoding_start_timestamp), &(output->encoding_start_timestamp)))
  {
    return false;
  }
  // encoding_finish_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->encoding_finish_timestamp), &(output->encoding_finish_timestamp)))
  {
    return false;
  }
  // decoding_start_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->decoding_start_timestamp), &(output->decoding_start_timestamp)))
  {
    return false;
  }
  // decoding_finish_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->decoding_finish_timestamp), &(output->decoding_finish_timestamp)))
  {
    return false;
  }
  // is_dense
  output->is_dense = input->is_dense;
  // format
  if (!rosidl_runtime_c__String__copy(
      &(input->format), &(output->format)))
  {
    return false;
  }
  return true;
}

benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 *
benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 * msg = (benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 *)allocator.allocate(sizeof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2));
  bool success = benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__destroy(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence__init(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 * data = NULL;

  if (size) {
    data = (benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 *)allocator.zero_allocate(size, sizeof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__fini(&data[i - 1]);
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
benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence__fini(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence * array)
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
      benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__fini(&array->data[i]);
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

benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence *
benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence * array = (benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence *)allocator.allocate(sizeof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence__destroy(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence__are_equal(const benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence * lhs, const benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence__copy(
  const benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence * input,
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 * data =
      (benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
