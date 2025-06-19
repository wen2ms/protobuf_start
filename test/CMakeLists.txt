cmake_minimum_required(VERSION 3.24)

project(test)

set(CMAKE_CXX_STANDARD 17)

find_package(Protobuf)

include_directories(${Protobuf_INCLUDE_DIRS})

aux_source_directory(./ SRC)

add_library(test ${SRC})

target_link_libraries(test protobuf)