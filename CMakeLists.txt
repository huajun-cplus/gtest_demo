cmake_minimum_required(VERSION 3.0.0)
project(gtest_demo)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

message(STATUS ${CMAKE_CXX_PLATFORM_ID})
if(CMAKE_CXX_PLATFORM_ID STREQUAL "Windows")
elseif(CMAKE_CXX_PLATFORM_ID STREQUAL "Linux")
    add_compile_options(-std=c++11)
    link_libraries(pthread)
endif()

add_subdirectory(src/gtest_demo)
