cmake_minimum_required(VERSION 3.8)
project(tentativo_colcon)

# ROS 2 dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(point_cloud_transport REQUIRED)
find_package(draco REQUIRED)
# Optional TF dependencies
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)

# Draco dependency
include_directories(third_party/draco)

# Add your executable
add_executable(draco_decoder_node src/draco_decoder_node.cpp)
ament_target_dependencies(draco_decoder_node rclcpp sensor_msgs std_msgs tf2 tf2_ros)

# Link Draco static library
#target_link_libraries(draco_decoder_node ${CMAKE_CURRENT_SOURCE_DIR}/third_party/draco/build/libdraco.a)
target_link_libraries(draco_decoder_node draco)
install(TARGETS
  draco_decoder_node
  DESTINATION lib/${PROJECT_NAME})
#install(DIRECTORY launch
#        DESTINATION share/${PROJECT_NAME})
ament_package()
