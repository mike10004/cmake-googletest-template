project(hello_test)

add_subdirectory(googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(../hello)

add_executable(hello_test hello_test.cpp)
target_link_libraries(hello_test hello gtest gtest_main)
