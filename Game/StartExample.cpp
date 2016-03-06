//
// Created by Andreas Pohl on 09.01.16.
//

#include <iostream>
#include <Platform/SDL2/TimeSDL2Adapter.h>
#include <Platform/GLFW/TimeGLFWAdapter.h>
#include <thread>
#include <Platform/Dependencies/glfw/include/GLFW/glfw3.h>
#include "Game.h"

int main(int argc, char *argv[]) {
  //RenderBuildExample test;
  //test.openGLInitTest();
  //Engine::Time *timer = (Engine::Time *) new Engine::TimeSDL2Adapter();

  Engine::TimeGLFWAdapter timer;

  Game *testGame = new Game(timer);
  glfwInit();
  for (int i = 0; i < 100; ++i) {
    testGame->Update();
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
  }

  testGame->Update();

  std::cout << "Hello World!";

  return 0;
}
