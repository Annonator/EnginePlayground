//
// Created by Andreas Pohl on 18.02.16.
//

#include <stdlib.h>
#include <iostream>
#include "BaseGame.h"
#include "Clock.h"

Engine::BaseGame::BaseGame(Time &time) : isRunning(true){
  this->gameClock = new Clock(time);
}

Engine::BaseGame::~BaseGame() {
  delete this->gameClock;
}

void Engine::BaseGame::Update() {
  std::cout << this->gameClock->GetElapsedTime() << "\n";

  if(this->quit){
    exit(0);
  }

  if (!this->isRunning) {
    return;
  }

  this->gameClock->Update();

  this->UpdateSimulation(this->gameClock->GetElapsedTime());
}

void Engine::BaseGame::Display() {
  //TODO @Andreas: Pre and Post Events
  this->Render();
}
