file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(MyExecutable ${SOURCES})

target_include_directories(MyExecutable PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(MyExecutable MyLibrary)