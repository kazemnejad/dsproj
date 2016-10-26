cmake_minimum_required(VERSION 3.6)
project(dsproj)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp vector.h CompressedData.cpp CompressedData.h DataCompressor.cpp DataCompressor.h Edge.cpp Edge.h)
add_executable(dsproj ${SOURCE_FILES})