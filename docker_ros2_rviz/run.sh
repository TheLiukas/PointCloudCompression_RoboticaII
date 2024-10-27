xhost +
sudo docker run --rm -it --net host --ipc host     -e DISPLAY     -v /tmp/.X11-unix/:/tmp/.X11-unix     -v ~/.Xauthority:/root/.Xauthority     -e XAUTHORITY=/root/.Xauthority     ros2-rviz bash
 