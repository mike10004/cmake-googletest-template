cmake_minimum_required(VERSION 3.19)
project(hello_test)

set(CMAKE_CXX_STANDARD 17)

include_directories(${gtest_SOURCE_DIR}/include)
include_directories(../hello)

add_executable(hello_test hello_test.cpp)
target_link_libraries(hello_test hello gtest gtest_main)
