cmake_minimum_required(VERSION 3.8)
project(pointcloud_decoder)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(point_cloud_interfaces REQUIRED)
find_package(point_cloud_transport REQUIRED)
find_package(benchdraco_point_cloud_interfaces REQUIRED)
find_package(benchdraco_point_cloud_transport REQUIRED)



add_executable(pointcloud_decoder_node src/pointcloud_decoder_node.cpp)
ament_target_dependencies(pointcloud_decoder_node rclcpp point_cloud_interfaces sensor_msgs benchdraco_point_cloud_transport benchdraco_point_cloud_interfaces)
target_link_libraries(pointcloud_decoder_node benchdraco_point_cloud_transport)

install(TARGETS
  pointcloud_decoder_node
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
