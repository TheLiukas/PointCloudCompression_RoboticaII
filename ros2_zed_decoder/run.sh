sudo docker run --hostname pointclouddecoder --gpus all --runtime nvidia -it --privileged --ipc=host --pid=host -e NVIDIA_DRIVER_CAPABILITIES=all -e NVIDIA_VISIBLE_DEVICES=all -e DISPLAY   -v /dev:/dev -v /tmp/.X11-unix/:/tmp/.X11-unix   -v  ${HOME}/zed_docker_ai/:/usr/local/zed/resources/ -v ./zed_catture:/root/ros2_ws/zed_catture point_cloud_compression_ros2_decoding:v0 bash