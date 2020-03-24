# CMake generated Testfile for 
# Source directory: /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/rosplan/rosplan_knowledge_base
# Build directory: /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_knowledge_base
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rosplan_knowledge_base_rostest_test_launch_knowledge_base.test "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_knowledge_base/catkin_generated/env_cached.sh" "/home/vsarathy/anaconda2/envs/ros_macgyver/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_knowledge_base/test_results/rosplan_knowledge_base/rostest-test_launch_knowledge_base.xml" "--return-code" "/opt/ros/kinetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/rosplan/rosplan_knowledge_base --package=rosplan_knowledge_base --results-filename test_launch_knowledge_base.xml --results-base-dir \"/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/rosplan_knowledge_base/test_results\" /home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/rosplan/rosplan_knowledge_base/test/launch/knowledge_base.test ")
subdirs(gtest)
