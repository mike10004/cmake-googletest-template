cmake_minimum_required(VERSION 3.19)
project(hello)

set(CMAKE_CXX_STANDARD 17)

add_library(hello hello.cpp hello.h)

