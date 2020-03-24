if("releases/legacy" STREQUAL "")
  message(FATAL_ERROR "Tag for git checkout should not be empty.")
endif()

set(run 0)

if("/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src/mongocxx-stamp/mongocxx-gitinfo.txt" IS_NEWER_THAN "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src/mongocxx-stamp/mongocxx-gitclone-lastrun.txt")
  set(run 1)
endif()

if(NOT run)
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src/mongocxx-stamp/mongocxx-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src/mongocxx"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src/mongocxx'")
endif()

# try the clone 3 times incase there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git" clone --origin "origin" "https://github.com/mongodb/mongo-cxx-driver.git" "mongocxx"
    WORKING_DIRECTORY "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/mongodb/mongo-cxx-driver.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git" checkout releases/legacy
  WORKING_DIRECTORY "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src/mongocxx"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'releases/legacy'")
endif()

execute_process(
  COMMAND "/usr/bin/git" submodule init 
  WORKING_DIRECTORY "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src/mongocxx"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to init submodules in: '/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src/mongocxx'")
endif()

execute_process(
  COMMAND "/usr/bin/git" submodule update --recursive 
  WORKING_DIRECTORY "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src/mongocxx"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src/mongocxx'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src/mongocxx-stamp/mongocxx-gitinfo.txt"
    "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src/mongocxx-stamp/mongocxx-gitclone-lastrun.txt"
  WORKING_DIRECTORY "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src/mongocxx"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/libmongocxx_ros/mongocxx/src/mongocxx-stamp/mongocxx-gitclone-lastrun.txt'")
endif()

