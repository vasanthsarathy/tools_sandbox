# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/mongodb_store/mongodb_store

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/mongodb_store

# Include any dependencies generated for this target.
include CMakeFiles/example_multi_event_log.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/example_multi_event_log.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/example_multi_event_log.dir/flags.make

CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o: CMakeFiles/example_multi_event_log.dir/flags.make
CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o: /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/mongodb_store/mongodb_store/src/example_multi_event_log.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/mongodb_store/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o -c /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/mongodb_store/mongodb_store/src/example_multi_event_log.cpp

CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/mongodb_store/mongodb_store/src/example_multi_event_log.cpp > CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.i

CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/mongodb_store/mongodb_store/src/example_multi_event_log.cpp -o CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.s

CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o.requires:

.PHONY : CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o.requires

CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o.provides: CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o.requires
	$(MAKE) -f CMakeFiles/example_multi_event_log.dir/build.make CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o.provides.build
.PHONY : CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o.provides

CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o.provides.build: CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o


# Object files for target example_multi_event_log
example_multi_event_log_OBJECTS = \
"CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o"

# External object files for target example_multi_event_log
example_multi_event_log_EXTERNAL_OBJECTS =

/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: CMakeFiles/example_multi_event_log.dir/build.make
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/libtopic_tools.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/libroscpp.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/librosconsole.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/librostime.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/libcpp_common.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/libmongocxx_ros/lib/libmongoclient.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libssl.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libcrypto.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/libmessage_store.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/libtopic_tools.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/libroscpp.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/librosconsole.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/librostime.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /opt/ros/kinetic/lib/libcpp_common.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/libmongocxx_ros/lib/libmongoclient.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libssl.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: /usr/lib/x86_64-linux-gnu/libcrypto.so
/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log: CMakeFiles/example_multi_event_log.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/mongodb_store/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_multi_event_log.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/example_multi_event_log.dir/build: /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/mongodb_store/lib/mongodb_store/example_multi_event_log

.PHONY : CMakeFiles/example_multi_event_log.dir/build

CMakeFiles/example_multi_event_log.dir/requires: CMakeFiles/example_multi_event_log.dir/src/example_multi_event_log.cpp.o.requires

.PHONY : CMakeFiles/example_multi_event_log.dir/requires

CMakeFiles/example_multi_event_log.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/example_multi_event_log.dir/cmake_clean.cmake
.PHONY : CMakeFiles/example_multi_event_log.dir/clean

CMakeFiles/example_multi_event_log.dir/depend:
	cd /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/mongodb_store && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/mongodb_store/mongodb_store /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/mongodb_store/mongodb_store /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/mongodb_store /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/mongodb_store /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/mongodb_store/CMakeFiles/example_multi_event_log.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/example_multi_event_log.dir/depend
