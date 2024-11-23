xhost +
sudo docker run --rm -it --net host --ipc host --hostname ros2rvizcontainer -e DISPLAY     -v /tmp/.X11-unix/:/tmp/.X11-unix     -v ~/.Xauthority:/root/.Xauthority -v ./ros2bag:/root/home/ros2bag    -e XAUTHORITY=/root/.Xauthority     ros2-rviz bash
 
