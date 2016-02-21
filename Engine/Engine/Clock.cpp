//
// Created by Andreas Pohl on 21.02.16.
//

#include "Clock.h"

Engine::Clock::Clock(Engine::Time &time) : time(time), currentTime(0.0f), elapsedTime(0.0f) {

}

Engine::Clock::~Clock() {

}

void Engine::Clock::Update() {
  unsigned int deltaTmp = this->time.GetTime();
  this->elapsedTime = deltaTmp - this->currentTime;
  this->currentTime = deltaTmp;
}

float Engine::Clock::GetElapsedTime() {
  return this->elapsedTime;
}
