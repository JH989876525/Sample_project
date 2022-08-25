# Copyright (c) 2022 Innodisk crop.
# 
# This software is released under the MIT License.
# https://opensource.org/licenses/MIT

CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
PROJECT(owen)

SET(OpenCV_DIR "/media/jhh/ExtraSSD/opencv_build")
FIND_PACKAGE(OpenCV REQUIRED)

AUX_SOURCE_DIRECTORY(src owen_src)
AUX_SOURCE_DIRECTORY(src/lib owen_lib)

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/include/)

ADD_LIBRARY(_owen ${owen_lib})

TARGET_INCLUDE_DIRECTORIES(_owen PUBLIC inc)
ADD_EXECUTABLE(${PROJECT_NAME} ${owen_src})
TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PUBLIC inc)
TARGET_LINK_LIBRARIES(${PROJECT_NAME} _owen ${OpenCV_LIBS})
