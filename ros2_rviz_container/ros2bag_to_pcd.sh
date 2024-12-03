printf "/**:\n  ros__parameters:\n    path_bag: $1 \n    topic_cloud: $2">./config/rosbag2_to_pcd.param.yaml
ros2 launch rosbag2_to_pcd rosbag2_to_pcd.launch.xml
