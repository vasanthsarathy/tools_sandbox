#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/mongodb_store/mongodb_store"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install/lib/python2.7/dist-packages:/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/mongodb_store/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/mongodb_store" \
    "/home/vsarathy/anaconda2/envs/ros_macgyver/bin/python" \
    "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/src/mongodb_store/mongodb_store/setup.py" \
    build --build-base "/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/build/mongodb_store" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install" --install-scripts="/home/vsarathy/proj/tools_sandbox/ros_packages/ros_macgyver/install/bin"
