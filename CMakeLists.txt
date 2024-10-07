cmake_minimum_required(VERSION 3.10)

project(VSMYPROJECT)

set(CMAKE_CXX_STANDARD 20)


add_executable(my_executable
    src/main.cpp
    src/log.cpp
    src/calc.cpp)

target_include_directories(my_executable PRIVATE ${CMAKE_SOURCE_DIR}/include)
