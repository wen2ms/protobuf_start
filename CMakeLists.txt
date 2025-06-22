cmake_minimum_required(VERSION 3.24)

project(protobuf_start)

set(CMAKE_CXX_STANDARD 17)

include_directories(test)

add_subdirectory(test)

link_libraries(test)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(protobuf_start main.cpp)