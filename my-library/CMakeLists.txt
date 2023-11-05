set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_library(MyLibrary STATIC ${SOURCES})

target_include_directories(MyLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include  ${OCC_INCLUDE_DIR})