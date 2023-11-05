set(CMAKE_CXX_STANDARD 14)

link_directories(${OCC_LIBRARY_DIR})

file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(MyExecutable ${SOURCES})

target_include_directories(MyExecutable PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include ${OCC_INCLUDE_DIR})
target_link_libraries(MyExecutable MyLibrary ${OCC_LIBRARIES})
