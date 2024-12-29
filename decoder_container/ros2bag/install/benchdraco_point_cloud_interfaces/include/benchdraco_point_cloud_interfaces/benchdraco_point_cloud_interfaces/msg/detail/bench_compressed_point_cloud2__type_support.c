// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from benchdraco_point_cloud_interfaces:msg/BenchCompressedPointCloud2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "benchdraco_point_cloud_interfaces/msg/detail/bench_compressed_point_cloud2__rosidl_typesupport_introspection_c.h"
#include "benchdraco_point_cloud_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "benchdraco_point_cloud_interfaces/msg/detail/bench_compressed_point_cloud2__functions.h"
#include "benchdraco_point_cloud_interfaces/msg/detail/bench_compressed_point_cloud2__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `fields`
#include "sensor_msgs/msg/point_field.h"
// Member `fields`
#include "sensor_msgs/msg/detail/point_field__rosidl_typesupport_introspection_c.h"
// Member `compressed_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `encoding_start_timestamp`
// Member `encoding_finish_timestamp`
// Member `decoding_start_timestamp`
// Member `decoding_finish_timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `encoding_start_timestamp`
// Member `encoding_finish_timestamp`
// Member `decoding_start_timestamp`
// Member `decoding_finish_timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `format`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__init(message_memory);
}

void benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_fini_function(void * message_memory)
{
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__fini(message_memory);
}

size_t benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__size_function__BenchCompressedPointCloud2__fields(
  const void * untyped_member)
{
  const sensor_msgs__msg__PointField__Sequence * member =
    (const sensor_msgs__msg__PointField__Sequence *)(untyped_member);
  return member->size;
}

const void * benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__get_const_function__BenchCompressedPointCloud2__fields(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__PointField__Sequence * member =
    (const sensor_msgs__msg__PointField__Sequence *)(untyped_member);
  return &member->data[index];
}

void * benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__get_function__BenchCompressedPointCloud2__fields(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__PointField__Sequence * member =
    (sensor_msgs__msg__PointField__Sequence *)(untyped_member);
  return &member->data[index];
}

void benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__fetch_function__BenchCompressedPointCloud2__fields(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sensor_msgs__msg__PointField * item =
    ((const sensor_msgs__msg__PointField *)
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__get_const_function__BenchCompressedPointCloud2__fields(untyped_member, index));
  sensor_msgs__msg__PointField * value =
    (sensor_msgs__msg__PointField *)(untyped_value);
  *value = *item;
}

void benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__assign_function__BenchCompressedPointCloud2__fields(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sensor_msgs__msg__PointField * item =
    ((sensor_msgs__msg__PointField *)
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__get_function__BenchCompressedPointCloud2__fields(untyped_member, index));
  const sensor_msgs__msg__PointField * value =
    (const sensor_msgs__msg__PointField *)(untyped_value);
  *item = *value;
}

bool benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__resize_function__BenchCompressedPointCloud2__fields(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__PointField__Sequence * member =
    (sensor_msgs__msg__PointField__Sequence *)(untyped_member);
  sensor_msgs__msg__PointField__Sequence__fini(member);
  return sensor_msgs__msg__PointField__Sequence__init(member, size);
}

size_t benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__size_function__BenchCompressedPointCloud2__compressed_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__get_const_function__BenchCompressedPointCloud2__compressed_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__get_function__BenchCompressedPointCloud2__compressed_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__fetch_function__BenchCompressedPointCloud2__compressed_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__get_const_function__BenchCompressedPointCloud2__compressed_data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__assign_function__BenchCompressedPointCloud2__compressed_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__get_function__BenchCompressedPointCloud2__compressed_data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__resize_function__BenchCompressedPointCloud2__compressed_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_message_member_array[16] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fields",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, fields),  // bytes offset in struct
    NULL,  // default value
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__size_function__BenchCompressedPointCloud2__fields,  // size() function pointer
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__get_const_function__BenchCompressedPointCloud2__fields,  // get_const(index) function pointer
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__get_function__BenchCompressedPointCloud2__fields,  // get(index) function pointer
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__fetch_function__BenchCompressedPointCloud2__fields,  // fetch(index, &value) function pointer
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__assign_function__BenchCompressedPointCloud2__fields,  // assign(index, value) function pointer
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__resize_function__BenchCompressedPointCloud2__fields  // resize(index) function pointer
  },
  {
    "is_bigendian",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, is_bigendian),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, point_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "row_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, row_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "compressed_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, compressed_data),  // bytes offset in struct
    NULL,  // default value
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__size_function__BenchCompressedPointCloud2__compressed_data,  // size() function pointer
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__get_const_function__BenchCompressedPointCloud2__compressed_data,  // get_const(index) function pointer
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__get_function__BenchCompressedPointCloud2__compressed_data,  // get(index) function pointer
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__fetch_function__BenchCompressedPointCloud2__compressed_data,  // fetch(index, &value) function pointer
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__assign_function__BenchCompressedPointCloud2__compressed_data,  // assign(index, value) function pointer
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__resize_function__BenchCompressedPointCloud2__compressed_data  // resize(index) function pointer
  },
  {
    "compressed_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, compressed_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, raw_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "encoding_start_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, encoding_start_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "encoding_finish_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, encoding_finish_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "decoding_start_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, decoding_start_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "decoding_finish_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, decoding_finish_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_dense",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, is_dense),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "format",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2, format),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_message_members = {
  "benchdraco_point_cloud_interfaces__msg",  // message namespace
  "BenchCompressedPointCloud2",  // message name
  16,  // number of fields
  sizeof(benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2),
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_message_member_array,  // message members
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_init_function,  // function to initialize message memory (memory has to be allocated)
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_message_type_support_handle = {
  0,
  &benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_benchdraco_point_cloud_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, benchdraco_point_cloud_interfaces, msg, BenchCompressedPointCloud2)() {
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointField)();
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_message_type_support_handle.typesupport_identifier) {
    benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__rosidl_typesupport_introspection_c__BenchCompressedPointCloud2_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
