//
// Created by Cheru Berhanu on 1/26/24.
//

#ifndef FRC_TAGDETECTION_CPP_POSE_ESTIMATOR_H
#define FRC_TAGDETECTION_CPP_POSE_ESTIMATOR_H

#include "frc/geometry/Pose3d.h"

using namespace frc;

struct PoseEstimation {
    int tag_id;
    Pose3d pose_0;
    double error_0;
    Pose3d pose_1;
    double error_1;
};

class PoseEstimator {
// TODO: use solvePnP to find pose
};


#endif //FRC_TAGDETECTION_CPP_POSE_ESTIMATOR_H
