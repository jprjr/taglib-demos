cmake_minimum_required(VERSION 3.11)
project(taglib_demo_list LANGUAGES CXX)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../cmake/modules")

find_package(TagLib REQUIRED)

add_executable(demo_list "demo_list.cpp")
target_link_libraries(demo_list PRIVATE TagLib::TagLib)

