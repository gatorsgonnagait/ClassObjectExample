cmake_minimum_required(VERSION 3.6)
project(ClassObjectExample)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Test.h Test.cpp)
add_executable(ClassObjectExample ${SOURCE_FILES})