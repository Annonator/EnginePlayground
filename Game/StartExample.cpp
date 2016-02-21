//
// Created by Andreas Pohl on 09.01.16.
//

#include <iostream>
#include <Platform/SDL2/TimeSDL2Adapter.h>
#include "Game.h"

int main(int argc, char *argv[]) {
  //RenderBuildExample test;
  //test.openGLInitTest();
  //Engine::Time *timer = (Engine::Time *) new Engine::TimeSDL2Adapter();

  Engine::TimeSDL2Adapter timer;

  Game *testGame = new Game(timer);

  for (int i = 0; i < 100; ++i) {
    testGame->Update();
  }

  testGame->Update();

  std::cout << "Hello World!";

  return 0;
}
