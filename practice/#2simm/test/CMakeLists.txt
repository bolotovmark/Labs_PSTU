cmake_minimum_required(VERSION 3.21)
project(test)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(test
        main.cpp
        Person.hpp
        Student.hpp)
