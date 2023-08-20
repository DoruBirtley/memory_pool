cmake_minimum_required(VERSION 3.5)
project(memory_pool)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O3 -g -Wall -fopenmp")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -g -Wall -fopenmp")

message(${PROJECT_SOURCE_DIR})

add_library(memory_pool_lib allocator.h allocator.cpp)
add_executable(memory_pool main.cpp)

target_link_libraries(memory_pool memory_pool_lib)