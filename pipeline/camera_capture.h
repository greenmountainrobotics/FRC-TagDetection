//
// Created by Cheru Berhanu on 1/26/24.
//

#ifndef FRC_TAGDETECTION_CPP_CAMERA_CAPTURE_H
#define FRC_TAGDETECTION_CPP_CAMERA_CAPTURE_H

#include <opencv2/imgcodecs.hpp>
#include "opencv2/core.hpp"
#include "opencv2/videoio.hpp"

class Capture {
public:
    virtual cv::Mat get_frame() = 0;
};


class USBCameraCapture: public Capture {
private:
    cv::VideoCapture camera;
public:
    USBCameraCapture();
    cv::Mat get_frame() override;
};

class FileCameraCapture: public Capture {
private:
    std::string filename;
public:
    FileCameraCapture(std::string filename);
    cv::Mat get_frame() override;
};

#endif //FRC_TAGDETECTION_CPP_CAMERA_CAPTURE_H