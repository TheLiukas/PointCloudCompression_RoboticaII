#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "point_cloud_transport::point_cloud_transport" for configuration ""
set_property(TARGET point_cloud_transport::point_cloud_transport APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(point_cloud_transport::point_cloud_transport PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libpoint_cloud_transport.so"
  IMPORTED_SONAME_NOCONFIG "libpoint_cloud_transport.so"
  )

list(APPEND _cmake_import_check_targets point_cloud_transport::point_cloud_transport )
list(APPEND _cmake_import_check_files_for_point_cloud_transport::point_cloud_transport "${_IMPORT_PREFIX}/lib/libpoint_cloud_transport.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
