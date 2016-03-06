//
// Created by Andreas Pohl on 05.03.16.
//

#include <SDL.h>
#include "WindowOGLAdapter.h"

Engine::WindowOGLAdapter::WindowOGLAdapter() : Window() {

}

Engine::WindowOGLAdapter::~WindowOGLAdapter() {
  SDL_GL_DeleteContext(this->context);
  SDL_Quit();

}

bool Engine::WindowOGLAdapter::initWindow() {
  if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
    printf("SDL_Init failed: %s\n", SDL_GetError());
    return false;
  }

  SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);

  this->window = SDL_CreateWindow("TODO", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, this->width, this->height,
                                  SDL_WINDOW_OPENGL);

  this->context = SDL_GL_CreateContext(this->window);

  return true;
}
