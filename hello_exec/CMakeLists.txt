project(hello_exec)

include_directories(../hello)

add_executable(hello_exec hello_exec.cpp)
target_link_libraries(hello_exec hello)
