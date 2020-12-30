FROM nvidia/cuda:11.1-devel-ubuntu20.04
MAINTAINER bogus@essentialab.co.kr

ENV TZ=Asia/Seoul
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

RUN apt-get update && apt-get install -y --no-install-recommends \
          build-essential \
          cmake \
          git \
          wget \
          libatlas-base-dev \
          libboost-all-dev \
          libgflags-dev \
          libgoogle-glog-dev \
          libhdf5-serial-dev \
          libleveldb-dev \
          liblmdb-dev \
          libopencv-dev \
          libprotobuf-dev \
          libsnappy-dev \
          protobuf-compiler \
          libtinyxml2-dev \
          libtinyxml-dev \
          libyaml-dev \
          libpoco-dev \
          libeigen3-dev \
          liboctomap-dev \
          libpugixml-dev \
          libgeographic-dev \
          qt5-default \
          libshiboken2-dev \
          libcurl4-openssl-dev \
          liblz4-dev \
          liborocos-kdl-dev \
          libbullet-dev \
          liburdfdom-dev \
          libgstreamer1.0-dev \
          libgstreamer-plugins-base1.0-dev \
          libsdl1.2-dev \
          libsdl-image1.2-dev \
          libyaml-cpp-dev \
          libbz2-dev \
          libgpgme-dev \
          libgps-dev \
          libopenni-dev \
          libusb-1.0-0-dev \
          libpcl-dev \
          libgazebo9-dev \
          libassimp-dev \
          libv4l-dev \
          libpcap-dev \
          libcudnn8-dev \
          libhdf5-dev \
          subversion \
          librosconsole-bridge-dev \
          libglu1-mesa-dev \
          python3-nose \
          python3-yaml \
          python3-rospkg \
          python3-numpy \
          python3-python-qt-binding \
          python3-pycryptodome \
          python3-setuptools \
          python3-pip \
          python3-gnupg \
          catkin && \
     rm -rf /var/lib/apt/lists/*

RUN /usr/bin/pip3 install -U colcon-common-extensions

ENV CAFFE_ROOT=/opt/ssdcaffe
ENV ROS_ROOT=/opt/ros_catkin_ws
ENV AUTOWARE_ROOT=/opt/autoware.ai

WORKDIR /opt

RUN git clone https://github.com/Essentia-Laboratory/intelligent-embedded-systems.git src 

WORKDIR /opt/src 

RUN git pull 

WORKDIR /opt

RUN ln -s /opt/src/caffe $CAFFE_ROOT
RUN mkdir -p $ROS_ROOT && ln -s /opt/src/ros $ROS_ROOT/src
RUN mkdir -p $AUTOWARE_ROOT && ln -s /opt/src/autoware $AUTOWARE_ROOT/src

WORKDIR $ROS_ROOT

RUN catkin_make_isolated \
  --install -DCMAKE_BUILD_TYPE=Release -DPYTHON_VERSION=3.8.5 \
  --pkg message_generation \
        catkin \
        roslaunch \
        genmsg \
        gencpp \
        geneus \
        gennodejs \
        genlisp \
        genpy \
        cpp_common \
        rostime \
        rosunit \
        rosconsole \
        roscpp_traits \
        roscpp_serialization \
        std_msgs \
        message_runtime \
        rosgraph_msgs \
        xmlrpcpp \
        roscpp \
        rostest \
        cmake_modules \
        rospack \
        roslib \
        dynamic_reconfigure \
        geometry_msgs \
        sensor_msgs \
        ros_environment \
        shape_msgs \
        derived_object_msgs \
        actionlib \
        rospy \
        actionlib_msgs \
        tf2_msgs \
        tf2 \
        tf2_py \
        rosgraph \
        tf2_ros \
        message_filters \
        angles \
        tf \
        pcl_msgs

RUN catkin_make_isolated \
  --install -DCMAKE_BUILD_TYPE=Release -DPYTHON_VERSION=3.8.5  && \
  rm -rf build_isolated devel_isolated

WORKDIR $CAFFE_ROOT

RUN git pull && make -j 24 && make dist && make clean

WORKDIR $AUTOWARE_ROOT

RUN /bin/bash -c 'cd /opt/autoware.ai \
  && source $ROS_ROOT/install_isolated/setup.bash \
  && USE_TF2=1 AUTOWARE_COMPILE_WITH_CUDA=1 colcon build \
       --cmake-args -DCMAKE_BUILD_TYPE=Release -DPYTHON_VERSION=3.8.5 \
  && rm -rf build log'

RUN echo '#!/bin/bash \
source /opt/ros_catkin_ws/install_isolated/setup.bash \
source /opt/autoware.ai/install/setup.bash' > /opt/entrypoint.sh

ENTRYPOINT ["/opt/entrypoint.sh"] 

CMD ["roslaunch", "carla_autoware_agent", "carla_autoware_agent.launch"]

# WORKDIR $CAFFE_ROOT

# FIXME: clone a specific git tag and use ARG instead of ENV once DockerHub supports this.
# ENV CLONE_TAG=master

# RUN git clone -b ${CLONE_TAG} --depth 1 https://github.com/BVLC/caffe.git . && \
#     for req in $(cat python/requirements.txt) pydot; do pip install $req; done && \
#     mkdir build && cd build && \
#     cmake -DUSE_CUDNN=1 .. && \
#     make -j"$(nproc)"

# ENV PYCAFFE_ROOT $CAFFE_ROOT/python
# ENV PYTHONPATH $PYCAFFE_ROOT:$PYTHONPATH
# ENV PATH $CAFFE_ROOT/build/tools:$PYCAFFE_ROOT:$PATH
# RUN echo "$CAFFE_ROOT/build/lib" >> /etc/ld.so.conf.d/caffe.conf && ldconfig
# 
# WORKDIR /workspace
