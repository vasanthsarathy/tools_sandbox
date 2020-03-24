# Install script for directory: /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/rosplan_demos/rosplan_demos_interfaces/rosplan_interface_mapping

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install" TYPE PROGRAM FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_interface_mapping/catkin_generated/installspace/_setup_util.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install" TYPE PROGRAM FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_interface_mapping/catkin_generated/installspace/env.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install/setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install" TYPE FILE FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_interface_mapping/catkin_generated/installspace/setup.bash")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install/setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install" TYPE FILE FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_interface_mapping/catkin_generated/installspace/setup.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install/setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install" TYPE FILE FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_interface_mapping/catkin_generated/installspace/setup.zsh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install" TYPE FILE FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_interface_mapping/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosplan_interface_mapping/srv" TYPE FILE FILES
    "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/rosplan_demos/rosplan_demos_interfaces/rosplan_interface_mapping/srv/CreatePRM.srv"
    "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/rosplan_demos/rosplan_demos_interfaces/rosplan_interface_mapping/srv/AddWaypoint.srv"
    "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/rosplan_demos/rosplan_demos_interfaces/rosplan_interface_mapping/srv/RemoveWaypoint.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosplan_interface_mapping/cmake" TYPE FILE FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_interface_mapping/catkin_generated/installspace/rosplan_interface_mapping-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/rosplan_interface_mapping/include/rosplan_interface_mapping")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/rosplan_interface_mapping/share/roseus/ros/rosplan_interface_mapping")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/rosplan_interface_mapping/share/common-lisp/ros/rosplan_interface_mapping")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/rosplan_interface_mapping/share/gennodejs/ros/rosplan_interface_mapping")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/home/vsarathy/anaconda2/envs/ros_macgyver/bin/python" -m compileall "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/rosplan_interface_mapping/lib/python2.7/dist-packages/rosplan_interface_mapping")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/rosplan_interface_mapping/lib/python2.7/dist-packages/rosplan_interface_mapping")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_interface_mapping/catkin_generated/installspace/rosplan_interface_mapping.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosplan_interface_mapping/cmake" TYPE FILE FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_interface_mapping/catkin_generated/installspace/rosplan_interface_mapping-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosplan_interface_mapping/cmake" TYPE FILE FILES
    "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_interface_mapping/catkin_generated/installspace/rosplan_interface_mappingConfig.cmake"
    "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_interface_mapping/catkin_generated/installspace/rosplan_interface_mappingConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rosplan_interface_mapping" TYPE FILE FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/rosplan_demos/rosplan_demos_interfaces/rosplan_interface_mapping/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rosplan_interface_mapping/rp_roadmap_server" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rosplan_interface_mapping/rp_roadmap_server")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rosplan_interface_mapping/rp_roadmap_server"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rosplan_interface_mapping" TYPE EXECUTABLE FILES "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/rosplan_interface_mapping/lib/rosplan_interface_mapping/rp_roadmap_server")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rosplan_interface_mapping/rp_roadmap_server" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rosplan_interface_mapping/rp_roadmap_server")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rosplan_interface_mapping/rp_roadmap_server"
         OLD_RPATH "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/devel/.private/occupancy_grid_utils/lib:/opt/ros/kinetic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rosplan_interface_mapping/rp_roadmap_server")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_interface_mapping/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_interface_mapping/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
