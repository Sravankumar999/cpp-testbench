cmake_minimum_required(VERSION 3.16)


project(CPPTestbench)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(CPPTestbench main.cpp)

add_library(Util STATIC util/00log.cpp util/00log.h)
target_include_directories(Util PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(CPPTestbench PRIVATE Util)