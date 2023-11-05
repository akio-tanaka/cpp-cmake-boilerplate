cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 14)
set (OCCT_ROOT_DIR "" CACHE PATH "Path to Open CASCADE libraries.")

include(./cmake/FindOCC.cmake)

add_subdirectory(my-executable)
add_subdirectory(my-library)