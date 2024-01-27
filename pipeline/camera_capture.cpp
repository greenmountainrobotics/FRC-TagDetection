//
// Created by Cheru Berhanu on 1/26/24.
//

#include <opencv2/imgcodecs.hpp>
#include <iostream>
#include "camera_capture.h"
#include "opencv2/core.hpp"
#include "opencv2/videoio.hpp"

USBCameraCapture::USBCameraCapture() {
        camera.open(1);
}

cv::Mat USBCameraCapture::get_frame() {
    if (!camera.isOpened()) {
        // TODO: handle error
    }

    cv::Mat outputImage;
    if (!camera.read(outputImage)) {
        // TODO: handle error
    }
    return outputImage;
}


FileCameraCapture::FileCameraCapture(std::string filename) {
    this->filename = filename;
};

cv::Mat FileCameraCapture::get_frame() {
    cv::Mat image = cv::imread(filename);
    return image;
}