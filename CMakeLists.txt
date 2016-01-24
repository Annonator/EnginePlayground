cmake_minimum_required(VERSION 3.3)
project(EnginePlayground)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

include_directories(Engine)

add_subdirectory("${CMAKE_SOURCE_DIR}/Engine/")
add_subdirectory("${CMAKE_SOURCE_DIR}/Game/")
add_subdirectory("${CMAKE_SOURCE_DIR}/Engine_Tests/")