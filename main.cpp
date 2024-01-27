#include <iostream>
#include "pipeline/camera_capture.h"
#include "pipeline/tag_detector.h"

using namespace std;
using namespace cv;

int main()
{
    FileCameraCapture capture = FileCameraCapture("/Users/cheru/Code/FRC-TagDetection/test.png");
    ArucoTagDetector detector = ArucoTagDetector();

    std::vector<TagDetection> tags = detector.detect_tags(capture.get_frame());

    for (int i = 0; i < tags.size(); i++) {
        std::cout << tags[i].tag_id << "\n";
    }
}