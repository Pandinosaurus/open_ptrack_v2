#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <ros/ros.h>
#include <cv_bridge/cv_bridge.h>
#include <Eigen/Dense>
#include <opencv2/core/eigen.hpp>
#include <visualization_msgs/Marker.h>


//functions documentation in utils.cpp

cv::Point3f get3dPoint(int x, int y, const cv::Mat& depthImage, double focalLengthX, double focalLengthY, double principalPointX, double principalPointY);
cv::Mat DoubleMatFromVec3b(cv::Vec3b in);
void opencvPoseToEigenPose(cv::Vec3d tvecV, cv::Vec3d rvecV, Eigen::Vector3d &Translate, Eigen::Quaterniond &quats);
int publish_pose_for_viewing(float tx, float ty, float tz, float qx, float qy, float qz, float qw, ros::Publisher pose_marker_pub, std::string name, float r, float g, float b, float a, float size);
double poseDistance(geometry_msgs::Pose pose1, geometry_msgs::Pose pose2);
int buildMarker(visualization_msgs::Marker& marker_pose, const geometry_msgs::Pose& pose, std::string name, float r, float g, float b, float a, float size);