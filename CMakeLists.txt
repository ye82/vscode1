cmake_minimum_required(VERSION 3.10)

project(VSMYPROJECT)

set(CMAKE_CXX_STANDARD 20)

# 设置头文件目录
include_directories($(CMAKE_SOURCE_DIRS)/include)

add_executable(my_executable src/main.cpp)

