cmake_minimum_required(VERSION 3.29)
project(LMS)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(LMS
    Course.cpp
    Course.h
    LMS.cpp
    LMS.h
    main.cpp
    Student.cpp
    Student.h)
