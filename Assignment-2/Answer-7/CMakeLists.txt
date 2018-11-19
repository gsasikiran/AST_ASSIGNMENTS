cmake_minimum_required(VERSION 2.8)

set (CMAKE_CXX_STANDARD 11)

set(TEST_INCLUDE_PATH "../catch.hpp")

file(GLOB PROJECT_SOURCE_FILES
"*.hpp" "*.cpp")

include_directories(${TEST_INCLUDE_PATH})

project(Answer-7)
add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_FILES} "main.cpp")
