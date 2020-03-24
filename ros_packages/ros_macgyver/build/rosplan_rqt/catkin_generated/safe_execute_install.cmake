execute_process(COMMAND "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_rqt/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_rqt/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
