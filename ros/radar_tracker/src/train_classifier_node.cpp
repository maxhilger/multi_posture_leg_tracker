#include "ros/ros.h"
#include "train_classifier_node/train_classifier.h"

int main(int argc, char** argv)
{
  // Declare a ROS node so we can get ROS parameters from the server
  ros::init(argc, argv, "radar_train_classifier");
  ros::NodeHandle nh;

  multi_posture_leg_tracker::radar_human_tracker::TrainClassifier tc(nh);
  tc.loadData(argc, argv);
  tc.run();

  printf("Finished successfully!\n");
  return 0;
}
