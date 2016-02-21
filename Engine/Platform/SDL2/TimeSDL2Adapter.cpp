//
// Created by Andreas Pohl on 21.02.16.
//

#include <SDL_timer.h>
#include "TimeSDL2Adapter.h"

Engine::TimeSDL2Adapter::TimeSDL2Adapter() {

}
Engine::TimeSDL2Adapter::~TimeSDL2Adapter() {

}
unsigned int Engine::TimeSDL2Adapter::GetTime() {
  return SDL_GetTicks();
}
