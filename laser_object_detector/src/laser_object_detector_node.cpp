/** \file

    This ROS node detects objects of a specific size in laser point clouds

*/

#include <ros/ros.h>
#include "detector.h"

/** Main node entry point. */
int main(int argc, char **argv)
{
  ros::init(argc, argv, "laser_object_detector_node");
  ros::NodeHandle node;
  ros::NodeHandle priv_nh("~");

  // create conversion class, which subscribes to raw data
  laser_object_detector::Detector detector(node, priv_nh);

  // handle callbacks until shut down
  ros::spin();

  return 0;
}