// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from benchdraco_point_cloud_interfaces:msg/BenchCompressedPointCloud2.idl
// generated code does not contain a copyright notice

#ifndef BENCHDRACO_POINT_CLOUD_INTERFACES__MSG__DETAIL__BENCH_COMPRESSED_POINT_CLOUD2__STRUCT_H_
#define BENCHDRACO_POINT_CLOUD_INTERFACES__MSG__DETAIL__BENCH_COMPRESSED_POINT_CLOUD2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'fields'
#include "sensor_msgs/msg/detail/point_field__struct.h"
// Member 'compressed_data'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'encoding_start_timestamp'
// Member 'encoding_finish_timestamp'
// Member 'decoding_start_timestamp'
// Member 'decoding_finish_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'format'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BenchCompressedPointCloud2 in the package benchdraco_point_cloud_interfaces.
/**
  * SPDX-License-Identifier: BSD-3-Clause
  * SPDX-FileCopyrightText: Czech Technical University in Prague .. 2019, paplhjak
 */
typedef struct benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2
{
  std_msgs__msg__Header header;
  uint32_t height;
  uint32_t width;
  sensor_msgs__msg__PointField__Sequence fields;
  bool is_bigendian;
  uint32_t point_step;
  uint32_t row_step;
  rosidl_runtime_c__uint8__Sequence compressed_data;
  uint32_t compressed_size;
  builtin_interfaces__msg__Time encoding_start_timestamp;
  builtin_interfaces__msg__Time encoding_finish_timestamp;
  builtin_interfaces__msg__Time decoding_start_timestamp;
  builtin_interfaces__msg__Time decoding_finish_timestamp;
  bool is_dense;
  /// compression format used (e.g. draco, zlib, etc.)
  rosidl_runtime_c__String format;
} benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2;

// Struct for a sequence of benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2.
typedef struct benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence
{
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BENCHDRACO_POINT_CLOUD_INTERFACES__MSG__DETAIL__BENCH_COMPRESSED_POINT_CLOUD2__STRUCT_H_
