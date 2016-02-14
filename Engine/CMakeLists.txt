cmake_minimum_required(VERSION 3.3)
project(Engine)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(SDL2 REQUIRED)
find_package(SDL2_Image REQUIRED)
find_package(SDL2_ttf REQUIRED)
find_package(GLEW REQUIRED)

include_directories(${SDL2_INCLUDE_DIR}
        ${SDL2_IMAGE_INCLUDE_DIR}
        ${SDL2_TTF_INCLUDE_DIR}
        ${GLEW_INCLUDE_DIRS})

set(SOURCE_FILES Render/RenderBuildExample.cpp Render/RenderBuildExample.h Math/Vector2.cpp Math/Vector2.h Math/Vector3.cpp Math/Vector3.h Render/Renderer.cpp Render/Renderer.h Render/OGL/RendererOGL.cpp Render/OGL/RendererOGL.h)
add_library(Engine STATIC ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY}
        ${SDL2_IMAGE_LIBRARIES}
        ${SDL2_TTF_LIBRARIES}
        ${GLEW_LIBRARIES}
        ${GLEW_INCLUDE_DIRS})