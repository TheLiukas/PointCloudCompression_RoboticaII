# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/home/point_cloud_transport_ws/src/draco

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/home/point_cloud_transport_ws/build/draco

# Include any dependencies generated for this target.
include CMakeFiles/draco_compression_mesh_traverser.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/draco_compression_mesh_traverser.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/draco_compression_mesh_traverser.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/draco_compression_mesh_traverser.dir/flags.make

CMakeFiles/draco_compression_mesh_traverser.dir/draco_compression_mesh_traverser.cc.o: CMakeFiles/draco_compression_mesh_traverser.dir/flags.make
CMakeFiles/draco_compression_mesh_traverser.dir/draco_compression_mesh_traverser.cc.o: draco_compression_mesh_traverser.cc
CMakeFiles/draco_compression_mesh_traverser.dir/draco_compression_mesh_traverser.cc.o: CMakeFiles/draco_compression_mesh_traverser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/home/point_cloud_transport_ws/build/draco/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/draco_compression_mesh_traverser.dir/draco_compression_mesh_traverser.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/draco_compression_mesh_traverser.dir/draco_compression_mesh_traverser.cc.o -MF CMakeFiles/draco_compression_mesh_traverser.dir/draco_compression_mesh_traverser.cc.o.d -o CMakeFiles/draco_compression_mesh_traverser.dir/draco_compression_mesh_traverser.cc.o -c /root/home/point_cloud_transport_ws/build/draco/draco_compression_mesh_traverser.cc

CMakeFiles/draco_compression_mesh_traverser.dir/draco_compression_mesh_traverser.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/draco_compression_mesh_traverser.dir/draco_compression_mesh_traverser.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/home/point_cloud_transport_ws/build/draco/draco_compression_mesh_traverser.cc > CMakeFiles/draco_compression_mesh_traverser.dir/draco_compression_mesh_traverser.cc.i

CMakeFiles/draco_compression_mesh_traverser.dir/draco_compression_mesh_traverser.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/draco_compression_mesh_traverser.dir/draco_compression_mesh_traverser.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/home/point_cloud_transport_ws/build/draco/draco_compression_mesh_traverser.cc -o CMakeFiles/draco_compression_mesh_traverser.dir/draco_compression_mesh_traverser.cc.s

draco_compression_mesh_traverser: CMakeFiles/draco_compression_mesh_traverser.dir/draco_compression_mesh_traverser.cc.o
draco_compression_mesh_traverser: CMakeFiles/draco_compression_mesh_traverser.dir/build.make
.PHONY : draco_compression_mesh_traverser

# Rule to build all files generated by this target.
CMakeFiles/draco_compression_mesh_traverser.dir/build: draco_compression_mesh_traverser
.PHONY : CMakeFiles/draco_compression_mesh_traverser.dir/build

CMakeFiles/draco_compression_mesh_traverser.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/draco_compression_mesh_traverser.dir/cmake_clean.cmake
.PHONY : CMakeFiles/draco_compression_mesh_traverser.dir/clean

CMakeFiles/draco_compression_mesh_traverser.dir/depend:
	cd /root/home/point_cloud_transport_ws/build/draco && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/home/point_cloud_transport_ws/src/draco /root/home/point_cloud_transport_ws/src/draco /root/home/point_cloud_transport_ws/build/draco /root/home/point_cloud_transport_ws/build/draco /root/home/point_cloud_transport_ws/build/draco/CMakeFiles/draco_compression_mesh_traverser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/draco_compression_mesh_traverser.dir/depend

