cmake_minimum_required(VERSION 3.11)
project(taglib-demos LANGUAGES CXX)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../cmake/modules")

find_package(TagLib REQUIRED)

add_executable(demo_map "demo_map.cpp")
target_link_libraries(demo_map PRIVATE TagLib::TagLib)
