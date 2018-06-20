cmake_minimum_required(VERSION 3.7)
project(interviewprep)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp HashMap.cpp HashMap.h)
add_executable(interviewprep ${SOURCE_FILES})