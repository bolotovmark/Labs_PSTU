cmake_minimum_required(VERSION 3.22)
project(opengl)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-lflut")
set(CMAKE_CXX_FLAGS "-lGL")
set(CMAKE_CXX_FLAGS "-lGLU")

add_executable(opengl
        opengl.cpp)
