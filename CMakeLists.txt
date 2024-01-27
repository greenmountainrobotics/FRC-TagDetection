cmake_minimum_required(VERSION 3.27)
project(FRC_TagDetection)

set(CMAKE_CXX_STANDARD 17)

add_executable(FRC_TagDetection main.cpp
        pipeline/camera_capture.cpp
        pipeline/camera_capture.h
        pipeline/tag_detector.cpp
        pipeline/tag_detector.h
        pipeline/pose_estimator.cpp
        pipeline/pose_estimator.h
        output/nt_publisher.cpp
        output/nt_publisher.h)

find_package(OpenCV REQUIRED)

include_directories( ${OpenCV_INCLUDE_DIRS} )

target_link_libraries(FRC_TagDetection ${OpenCV_LIBS} )

find_package(ntcore REQUIRED)
find_package(wpimath REQUIRED)

target_link_libraries(FRC_TagDetection ntcore wpimath)
