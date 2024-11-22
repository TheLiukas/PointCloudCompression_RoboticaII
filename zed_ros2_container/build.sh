#!/usr/bin/env bash
# Filename: build.sh
pwd
cd ./zed-ros2-wrapper/docker/
pwd
ls
sudo chmod 777 desktop_build_dockerfile_from_sdk_ubuntu_and_cuda_version.sh
sudo ./desktop_build_dockerfile_from_sdk_ubuntu_and_cuda_version.sh ubuntu22.04 cuda12.1.0 zedsdk4.1.4
cd ../..
pwd
