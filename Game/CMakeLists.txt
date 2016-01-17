cmake_minimum_required(VERSION 3.3)
project(TestGame)

include_directories(${CMAKE_SOURCE_DIR}/)

set(SOURCE_FILES StartExample.cpp)
add_executable(TestGame ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} Engine)