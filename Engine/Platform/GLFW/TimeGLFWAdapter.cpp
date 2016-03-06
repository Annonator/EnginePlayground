//
// Created by Andreas Pohl on 06.03.16.
//


#include <GLFW/glfw3.h>
#include "TimeGLFWAdapter.h"

unsigned int Engine::TimeGLFWAdapter::GetTime() {
  return (unsigned int) (glfwGetTime()*1000.0f);
}
