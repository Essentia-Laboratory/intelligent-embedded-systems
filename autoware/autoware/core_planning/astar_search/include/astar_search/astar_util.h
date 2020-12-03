/*
 * Copyright 2015-2019 Autoware Foundation. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ASTAR_UTIL_H
#define ASTAR_UTIL_H

#if USE_TF2
# include <tf2_geometry_msgs/tf2_geometry_msgs.h>
# include <tf2/convert.h>
#endif
# include <tf/tf.h>

enum class STATUS : uint8_t
{
  NONE,
  OPEN,
  CLOSED,
  OBS
};

struct AstarNode
{
  double x, y, theta;            // Coordinate of each node
  STATUS status = STATUS::NONE;  // NONE, OPEN, CLOSED or OBS
  double gc = 0;                 // Actual cost
  double hc = 0;                 // heuristic cost
  double move_distance = 0;      // actual move distance
  bool back;                     // true if the current direction of the vehicle is back
  AstarNode* parent = NULL;      // parent node
};

struct WaveFrontNode
{
  int index_x;
  int index_y;
  double hc;

  WaveFrontNode();
  WaveFrontNode(int x, int y, double cost);
};

struct NodeUpdate
{
  double shift_x;
  double shift_y;
  double rotation;
  double step;
  int index_theta;
  bool curve;
  bool back;
};

// For open list and goal list
struct SimpleNode
{
  int index_x;
  int index_y;
  int index_theta;
  double cost;

  bool operator>(const SimpleNode& right) const
  {
    return cost > right.cost;
  }

  SimpleNode();
  SimpleNode(int x, int y, int theta, double gc, double hc);
};

inline double calcDistance(double x1, double y1, double x2, double y2)
{
  return std::hypot(x2 - x1, y2 - y1);
}

inline double modifyTheta(double theta)
{
  if (theta < 0.0)
    return theta + 2.0 * M_PI;
  if (theta >= 2.0 * M_PI)
    return theta - 2.0 * M_PI;

  return theta;
}

#if USE_TF2
inline geometry_msgs::Pose transformPose(const geometry_msgs::Pose& pose, const tf2::Stamped<tf2::Transform>& tf)
{
  geometry_msgs::Pose ros_pose;
  geometry_msgs::TransformStamped transform = tf2::toMsg( tf );

  tf2::doTransform(pose, ros_pose, transform);

  return ros_pose;
}

inline geometry_msgs::Pose transformPose(const geometry_msgs::Pose& pose, const geometry_msgs::TransformStamped& transform)
{
  geometry_msgs::Pose ros_pose;

  tf2::doTransform(pose, ros_pose, transform);

  return ros_pose;
}
#else
inline geometry_msgs::Pose transformPose(const geometry_msgs::Pose& pose, const tf::Transform& tf)
{
  // Convert ROS pose to TF pose
  tf::Pose tf_pose;
  tf::poseMsgToTF(pose, tf_pose);

  // Transform pose
  tf_pose = tf * tf_pose;

  // Convert TF pose to ROS pose
  geometry_msgs::Pose ros_pose;
  tf::poseTFToMsg(tf_pose, ros_pose);

  return ros_pose;
}
#endif

inline WaveFrontNode getWaveFrontNode(int x, int y, double cost)
{
  WaveFrontNode node(x, y, cost);

  return node;
}

inline geometry_msgs::Point calcRelativeCoordinate(geometry_msgs::Pose pose, tf::Point point)
{
  tf::Transform transform;
  tf::poseMsgToTF(pose, transform);
  transform = transform.inverse();

  point = transform * point;
  geometry_msgs::Point point_msg;
  tf::pointTFToMsg(point, point_msg);

  return point_msg;
}

inline double calcDiffOfRadian(double a, double b)
{
  double diff = std::fmod(std::fabs(a - b), 2.0 * M_PI);
  if (diff < M_PI)
    return diff;
  else
    return 2.0 * M_PI - diff;
}

inline geometry_msgs::Pose xytToPoseMsg(double x, double y, double theta)
{
  geometry_msgs::Pose p;
  p.position.x = x;
  p.position.y = y;
#if USE_TF2
  tf2::Quaternion q;
  q.setRPY(0.0, 0.0, theta);
  p.orientation = tf2::toMsg(q);
#else
  p.orientation = tf::createQuaternionMsgFromYaw(theta);
#endif

  return p;
}

#endif
