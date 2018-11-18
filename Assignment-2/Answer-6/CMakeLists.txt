cmake_minimum_required(VERSION 2.8)

set (CMAKE_CXX_STANDARD 11)

set(TEST_INCLUDE_PATH "../catch.hpp")
include_directories(${TEST_INCLUDE_PATH})

project(Answer-6)
add_executable(${PROJECT_NAME} "main.cpp")
