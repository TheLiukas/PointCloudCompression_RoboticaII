printf "/**:\n  ros__parameters:\n    path_bag: $1 \n    topic_cloud: $2">/root/ros2_ws/src/rosbag2_to_pcd/config/rosbag2_to_pcd.param.yaml
ros2 launch rosbag2_to_pcd /root/ros2_ws/src/rosbag2_to_pcd/rosbag2_to_pcd.launch.xml
