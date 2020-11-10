# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds-build

# Include any dependencies generated for this target.
include tools/fds/CMakeFiles/fast-discovery-server.dir/depend.make

# Include the progress variables for this target.
include tools/fds/CMakeFiles/fast-discovery-server.dir/progress.make

# Include the compile flags for this target's objects.
include tools/fds/CMakeFiles/fast-discovery-server.dir/flags.make

tools/fds/CMakeFiles/fast-discovery-server.dir/server.cpp.o: tools/fds/CMakeFiles/fast-discovery-server.dir/flags.make
tools/fds/CMakeFiles/fast-discovery-server.dir/server.cpp.o: /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds/tools/fds/server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/fds/CMakeFiles/fast-discovery-server.dir/server.cpp.o"
	cd /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds-build/tools/fds && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fast-discovery-server.dir/server.cpp.o -c /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds/tools/fds/server.cpp

tools/fds/CMakeFiles/fast-discovery-server.dir/server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fast-discovery-server.dir/server.cpp.i"
	cd /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds-build/tools/fds && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds/tools/fds/server.cpp > CMakeFiles/fast-discovery-server.dir/server.cpp.i

tools/fds/CMakeFiles/fast-discovery-server.dir/server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fast-discovery-server.dir/server.cpp.s"
	cd /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds-build/tools/fds && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds/tools/fds/server.cpp -o CMakeFiles/fast-discovery-server.dir/server.cpp.s

# Object files for target fast-discovery-server
fast__discovery__server_OBJECTS = \
"CMakeFiles/fast-discovery-server.dir/server.cpp.o"

# External object files for target fast-discovery-server
fast__discovery__server_EXTERNAL_OBJECTS =

tools/fds/fast-discovery-server-1.0.0: tools/fds/CMakeFiles/fast-discovery-server.dir/server.cpp.o
tools/fds/fast-discovery-server-1.0.0: tools/fds/CMakeFiles/fast-discovery-server.dir/build.make
tools/fds/fast-discovery-server-1.0.0: src/cpp/libfastrtps.so.2.0.1
tools/fds/fast-discovery-server-1.0.0: /opt/ros/foxy/lib/libfastcdr.so.1.0.13
tools/fds/fast-discovery-server-1.0.0: /opt/ros/foxy/lib/libfoonathan_memory-0.6.2.a
tools/fds/fast-discovery-server-1.0.0: /usr/lib/x86_64-linux-gnu/libssl.so
tools/fds/fast-discovery-server-1.0.0: /usr/lib/x86_64-linux-gnu/libcrypto.so
tools/fds/fast-discovery-server-1.0.0: tools/fds/CMakeFiles/fast-discovery-server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable fast-discovery-server-1.0.0"
	cd /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds-build/tools/fds && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fast-discovery-server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/fds/CMakeFiles/fast-discovery-server.dir/build: tools/fds/fast-discovery-server-1.0.0

.PHONY : tools/fds/CMakeFiles/fast-discovery-server.dir/build

tools/fds/CMakeFiles/fast-discovery-server.dir/clean:
	cd /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds-build/tools/fds && $(CMAKE_COMMAND) -P CMakeFiles/fast-discovery-server.dir/cmake_clean.cmake
.PHONY : tools/fds/CMakeFiles/fast-discovery-server.dir/clean

tools/fds/CMakeFiles/fast-discovery-server.dir/depend:
	cd /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds/tools/fds /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds-build /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds-build/tools/fds /home/microros/microros_ws/build/microxrcedds_agent/fastdds/src/fastdds-build/tools/fds/CMakeFiles/fast-discovery-server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/fds/CMakeFiles/fast-discovery-server.dir/depend
