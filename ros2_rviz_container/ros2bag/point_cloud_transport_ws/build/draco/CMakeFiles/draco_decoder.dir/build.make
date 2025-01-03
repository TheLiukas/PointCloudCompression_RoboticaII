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
include CMakeFiles/draco_decoder.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/draco_decoder.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/draco_decoder.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/draco_decoder.dir/flags.make

CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.o: CMakeFiles/draco_decoder.dir/flags.make
CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.o: /root/home/point_cloud_transport_ws/src/draco/src/draco/tools/draco_decoder.cc
CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.o: CMakeFiles/draco_decoder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/home/point_cloud_transport_ws/build/draco/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.o -MF CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.o.d -o CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.o -c /root/home/point_cloud_transport_ws/src/draco/src/draco/tools/draco_decoder.cc

CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/home/point_cloud_transport_ws/src/draco/src/draco/tools/draco_decoder.cc > CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.i

CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/home/point_cloud_transport_ws/src/draco/src/draco/tools/draco_decoder.cc -o CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.s

# Object files for target draco_decoder
draco_decoder_OBJECTS = \
"CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.o"

# External object files for target draco_decoder
draco_decoder_EXTERNAL_OBJECTS =

draco_decoder: CMakeFiles/draco_decoder.dir/src/draco/tools/draco_decoder.cc.o
draco_decoder: CMakeFiles/draco_decoder.dir/build.make
draco_decoder: libdracodec.a
draco_decoder: CMakeFiles/draco_decoder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/home/point_cloud_transport_ws/build/draco/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable draco_decoder"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/draco_decoder.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/draco_decoder.dir/build: draco_decoder
.PHONY : CMakeFiles/draco_decoder.dir/build

CMakeFiles/draco_decoder.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/draco_decoder.dir/cmake_clean.cmake
.PHONY : CMakeFiles/draco_decoder.dir/clean

CMakeFiles/draco_decoder.dir/depend:
	cd /root/home/point_cloud_transport_ws/build/draco && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/home/point_cloud_transport_ws/src/draco /root/home/point_cloud_transport_ws/src/draco /root/home/point_cloud_transport_ws/build/draco /root/home/point_cloud_transport_ws/build/draco /root/home/point_cloud_transport_ws/build/draco/CMakeFiles/draco_decoder.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/draco_decoder.dir/depend

