cmake_minimum_required(VERSION 3.19)
project(hello_parent)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(hello)
add_subdirectory(hello_exec)
add_subdirectory(hello_test)


