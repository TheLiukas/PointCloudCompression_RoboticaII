// generated from rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em
// generated code does not contain a copyright notice
#include <Python.h>

static PyMethodDef benchdraco_point_cloud_interfaces__methods[] = {
  {NULL, NULL, 0, NULL}  /* sentinel */
};

static struct PyModuleDef benchdraco_point_cloud_interfaces__module = {
  PyModuleDef_HEAD_INIT,
  "_benchdraco_point_cloud_interfaces_support",
  "_benchdraco_point_cloud_interfaces_doc",
  -1,  /* -1 means that the module keeps state in global variables */
  benchdraco_point_cloud_interfaces__methods,
  NULL,
  NULL,
  NULL,
  NULL,
};

#include <stdbool.h>
#include <stdint.h>
#include "rosidl_runtime_c/visibility_control.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "benchdraco_point_cloud_interfaces/msg/detail/bench_compressed_point_cloud2__type_support.h"
#include "benchdraco_point_cloud_interfaces/msg/detail/bench_compressed_point_cloud2__struct.h"
#include "benchdraco_point_cloud_interfaces/msg/detail/bench_compressed_point_cloud2__functions.h"

static void * benchdraco_point_cloud_interfaces__msg__bench_compressed_point_cloud2__create_ros_message(void)
{
  return benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__create();
}

static void benchdraco_point_cloud_interfaces__msg__bench_compressed_point_cloud2__destroy_ros_message(void * raw_ros_message)
{
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 * ros_message = (benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2 *)raw_ros_message;
  benchdraco_point_cloud_interfaces__msg__BenchCompressedPointCloud2__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool benchdraco_point_cloud_interfaces__msg__bench_compressed_point_cloud2__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * benchdraco_point_cloud_interfaces__msg__bench_compressed_point_cloud2__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(benchdraco_point_cloud_interfaces, msg, BenchCompressedPointCloud2);

int8_t
_register_msg_type__msg__bench_compressed_point_cloud2(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&benchdraco_point_cloud_interfaces__msg__bench_compressed_point_cloud2__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__bench_compressed_point_cloud2",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&benchdraco_point_cloud_interfaces__msg__bench_compressed_point_cloud2__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__bench_compressed_point_cloud2",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&benchdraco_point_cloud_interfaces__msg__bench_compressed_point_cloud2__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__bench_compressed_point_cloud2",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&benchdraco_point_cloud_interfaces__msg__bench_compressed_point_cloud2__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__bench_compressed_point_cloud2",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(benchdraco_point_cloud_interfaces, msg, BenchCompressedPointCloud2),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__bench_compressed_point_cloud2",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

PyMODINIT_FUNC
PyInit_benchdraco_point_cloud_interfaces_s__rosidl_typesupport_introspection_c(void)
{
  PyObject * pymodule = NULL;
  pymodule = PyModule_Create(&benchdraco_point_cloud_interfaces__module);
  if (!pymodule) {
    return NULL;
  }
  int8_t err;

  err = _register_msg_type__msg__bench_compressed_point_cloud2(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  return pymodule;
}
