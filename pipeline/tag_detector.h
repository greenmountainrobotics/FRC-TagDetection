//
// Created by Cheru Berhanu on 1/26/24.
//

#ifndef FRC_TAGDETECTION_CPP_TAG_DETECTOR_H
#define FRC_TAGDETECTION_CPP_TAG_DETECTOR_H


#include <vector>
#include "opencv2/aruco.hpp"

using namespace cv;

struct TagDetection {
    int tag_id;
    std::vector<Point2f> corners;
};

class TagDetector {
public:
    virtual std::vector<TagDetection> detect_tags(const Mat& image) = 0;
};

class ArucoTagDetector: public TagDetector {
public:
    std::vector<TagDetection> detect_tags(const Mat& image) override;
    ArucoTagDetector();

private:
    aruco::ArucoDetector detector;
};


#endif //FRC_TAGDETECTION_CPP_TAG_DETECTOR_H
