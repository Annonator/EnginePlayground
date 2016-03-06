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
        Platform/Dependencies/glfw/include
        ${GLEW_INCLUDE_DIRS})


set(SOURCE_FILES Render/RenderBuildExample.cpp Render/RenderBuildExample.h Math/Vector2.cpp Math/Vector2.h Math/Vector3.cpp Math/Vector3.h Render/Renderer.cpp Render/Renderer.h Engine/BaseGame.cpp Engine/BaseGame.h Engine/Clock.cpp Engine/Clock.h Platform/Time.h Platform/SDL2/TimeSDL2Adapter.cpp Platform/SDL2/TimeSDL2Adapter.h Render/OGL/RendererOGLAdapter.cpp Render/OGL/RendererOGLAdapter.h Render/Window.cpp Render/Window.h Render/OGL/WindowOGLAdapter.cpp Render/OGL/WindowOGLAdapter.h Platform/GLFW/TimeGLFWAdapter.cpp Platform/GLFW/TimeGLFWAdapter.h)
add_library(Engine SHARED ${SOURCE_FILES})

add_subdirectory(Platform/Dependencies/glfw)

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY}
        ${SDL2_IMAGE_LIBRARIES}
        ${SDL2_TTF_LIBRARIES}
        glfw
        ${GLFW_LIBRARIES}
        ${GLEW_LIBRARIES}
        ${GLEW_INCLUDE_DIRS})