//
// Created by Cheru Berhanu on 1/26/24.
//

#include "tag_detector.h"
#include "opencv2/aruco.hpp"

using namespace cv;

ArucoTagDetector::ArucoTagDetector() {
    aruco::Dictionary dictionary = aruco::getPredefinedDictionary(cv::aruco::DICT_APRILTAG_36h11);
    detector = aruco::ArucoDetector(dictionary);
}

std::vector<TagDetection> ArucoTagDetector::detect_tags(const Mat& image) {
    std::vector<std::vector<Point2f>> corners;
    std::vector<int> ids;
    detector.detectMarkers(image, corners, ids);

    if (corners.empty()) return {};

    std::vector<TagDetection> tagDetections;
    tagDetections.reserve(ids.size());

for (int i = 0; i < ids.size(); i++) {
        tagDetections.push_back(TagDetection {
            .tag_id =  ids[i],
            .corners = corners[i]
        });
    }

    return tagDetections;
}
