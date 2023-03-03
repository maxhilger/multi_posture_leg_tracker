#include <ros/ros.h>
#include "human_tracker_node/human_tracker.h"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "laser_human_tracker", ros::init_options::AnonymousName);

  multi_posture_leg_tracker::laser_human_tracker::KalmanMultiTracker kmt;

  ros::spin();
}
