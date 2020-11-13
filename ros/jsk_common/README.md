jsk_common
===

[![GitHub version](https://badge.fury.io/gh/jsk-ros-pkg%2Fjsk_common.svg)](https://badge.fury.io/gh/jsk-ros-pkg%2Fjsk_common)
[![Build Status](https://travis-ci.org/jsk-ros-pkg/jsk_common.svg?branch=master)](https://travis-ci.org/jsk-ros-pkg/jsk_common)
[![Read the Docs](https://readthedocs.org/projects/jsk-docs/badge/?version=latest)](http://jsk-docs.readthedocs.org/en/latest/jsk_common/doc/index.html)
[![Slack](https://img.shields.io/badge/slack-jsk--robotics-e100e1.svg)](http://jsk-robotics.slack.com)
[![Join the chat at https://gitter.im/jsk-ros-pkg/jsk_common](https://badges.gitter.im/Join%20Chat.svg)](https://gitter.im/jsk-ros-pkg/jsk_common?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

Document
--------

See [readthedocs](http://jsk-common.readthedocs.org/en/latest/) for document.

Deb Build Status
------------

[//]: # (!!DO NOT EDIT !!)

[//]: # (THIS SECTION IS AUTOMATICALLY GENERATED BY)

[//]: # (rosrun jsk_tools generate_deb_status_table.py jsk_common)


| Package            | Kinetic (Xenial)                                                                                                                                                                                 | Melodic (Bionic)                                                                                                                                                                                 | Melodic (Stretch)                                                                                                                                                                                  |
|:-------------------|:-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|:-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|:---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| jsk_common (arm64) | [![Build Status](http://build.ros.org/job/Kbin_uxv8_uXv8__jsk_common__ubuntu_xenial_arm64__binary/badge/icon)](http://build.ros.org/job/Kbin_uxv8_uXv8__jsk_common__ubuntu_xenial_arm64__binary) | [![Build Status](http://build.ros.org/job/Mbin_ubv8_uBv8__jsk_common__ubuntu_bionic_arm64__binary/badge/icon)](http://build.ros.org/job/Mbin_ubv8_uBv8__jsk_common__ubuntu_bionic_arm64__binary) | [![Build Status](http://build.ros.org/job/Mbin_dsv8_dSv8__jsk_common__debian_stretch_arm64__binary/badge/icon)](http://build.ros.org/job/Mbin_dsv8_dSv8__jsk_common__debian_stretch_arm64__binary) |
| jsk_common (armhf) | [![Build Status](http://build.ros.org/job/Kbin_uxhf_uXhf__jsk_common__ubuntu_xenial_armhf__binary/badge/icon)](http://build.ros.org/job/Kbin_uxhf_uXhf__jsk_common__ubuntu_xenial_armhf__binary) | [![Build Status](http://build.ros.org/job/Mbin_ubhf_uBhf__jsk_common__ubuntu_bionic_armhf__binary/badge/icon)](http://build.ros.org/job/Mbin_ubhf_uBhf__jsk_common__ubuntu_bionic_armhf__binary) | ---                                                                                                                                                                                                |
| jsk_common (i386)  | [![Build Status](http://build.ros.org/job/Kbin_uX32__jsk_common__ubuntu_xenial_i386__binary/badge/icon)](http://build.ros.org/job/Kbin_uX32__jsk_common__ubuntu_xenial_i386__binary)             | ---                                                                                                                                                                                              | ---                                                                                                                                                                                                |
| jsk_common (amd64) | [![Build Status](http://build.ros.org/job/Kbin_uX64__jsk_common__ubuntu_xenial_amd64__binary/badge/icon)](http://build.ros.org/job/Kbin_uX64__jsk_common__ubuntu_xenial_amd64__binary)           | [![Build Status](http://build.ros.org/job/Mbin_uB64__jsk_common__ubuntu_bionic_amd64__binary/badge/icon)](http://build.ros.org/job/Mbin_uB64__jsk_common__ubuntu_bionic_amd64__binary)           | [![Build Status](http://build.ros.org/job/Mbin_ds_dS64__jsk_common__debian_stretch_amd64__binary/badge/icon)](http://build.ros.org/job/Mbin_ds_dS64__jsk_common__debian_stretch_amd64__binary)     |

[//]: #

Install
---



#### If you use Kinetic on Debian or Ubuntu, you can run


```
apt-get install ros-kinetic-jsk-common
```

##### Or, if you are willing to install from source, you instead can run


```
mkdir -p catkin_ws/src
cd catkin_ws/src
git clone http://github.com/jsk-ros-pkg/jsk_common
cd jsk_common
rosdep install -y -r --from-path . --ignore-src
cd ../../
catkin build
```

##### For hacker

```sh
wget -q -O /tmp/jsk.rosbuild https://raw.github.com/jsk-ros-pkg/jsk_common/master/jsk.rosbuild
bash /tmp/jsk.rosbuild --from-source hydro
```

##### For hrpsys user

```sh
wget -q -O /tmp/jsk.rosbuild https://raw.github.com/jsk-ros-pkg/jsk_common/master/jsk.rosbuild
bash /tmp/jsk.rosbuild --rtm hydro
```

##### For hrpsys hacker

```sh
wget -q -O /tmp/jsk.rosbuild https://raw.github.com/jsk-ros-pkg/jsk_common/master/jsk.rosbuild
bash /tmp/jsk.rosbuild --from-source --rtm hydro
```

`jsk.rosbuild` generates filesystem as follows:

```
~ --- ros
       + --- hydro_parent: Only availabe if --from-source option is enabled
              + --- src:   maintained by wstool
              + --- build: generated by catkin_tools
              + --- devel: generated by catkin_tools
       +--- hydro
             + --- src:    maintained by wstool
             + --- build:  generated by catkin_tools
             + --- devel:  generated by catkin_tools
```

Watch all the jsk github repositories.
===
Please use [this](http://jsk-github-watcher.herokuapp.com/)

Slack for JSK Lab members <img src="https://upload.wikimedia.org/wikipedia/en/7/76/Slack_Icon.png" height="40px" />
=========================
You can login to [slack](https://slack.com/) from [here](https://jsk-robotics.slack.com).
You can create account using imi address.

[scudcloud](https://github.com/raelgc/scudcloud) is a desktop client for slack and you can install it
by following [instruction](https://github.com/raelgc/scudcloud#ubuntukubuntu-mint-and-debian).

You can restart travis and jenkins from slack's `#travis` channel.

You can browse all channels by clicking `Channels` in a left menu bar.

Restart travis from slack
-------------------------
![](images/restart_travis.png)

Type `restart travis <job-id>` from slack#travis channel.

**N.B.: `<job-id>` is not the number of Pull-request.**

you can get `<job-id>` from Travis page.

- ![](images/PR_page.png)
- <img src="images/Travis_page.png" width="70%" />

Restart docker from slack
-------------------------
![](images/restart_docker.png)

Type `restart docker` from slack#travis channel.