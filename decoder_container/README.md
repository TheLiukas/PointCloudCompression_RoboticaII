comando per decoding
ros2 run point_cloud_transport republish --ros-args -p in_transport:=bench -p out_transport:=raw --ros-args -r __node:=point_cloud_republisher --remap in/bench:=/zed/zed_node/mapping/fused_cloud/bench --remap out:=/rawout
