#include <iostream>
#include <GL/glew.h>
#include <SDl.h>
#include <glm/vec3.hpp>
#include <SDL_opengl.h>


using namespace std;

int main(int argc, char *argv[]) {
  glm::vec3 test;
  SDL_Init(SDL_INIT_VIDEO);

  SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);

  SDL_Window *window = SDL_CreateWindow("OpenGL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600,
                                        SDL_WINDOW_OPENGL);

  SDL_GLContext context = SDL_GL_CreateContext(window);

  glewExperimental = GL_TRUE;
  glewInit();

  GLuint vertexBuffer;
  glGenBuffers(1, &vertexBuffer);

  printf("%u\n", vertexBuffer);

  SDL_Event event;

  while (true) {
    if (SDL_PollEvent(&event)) {
      if (event.type == SDL_QUIT) break;
    }

    //Get window surface
    SDL_Surface *screenSurface = SDL_GetWindowSurface(window);

    //Fill the surface white
    SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

    //Update the surface
    SDL_UpdateWindowSurface(window);

    //Wait two seconds
    SDL_Delay(1000);
  }

  SDL_GL_DeleteContext(context);
  SDL_Quit();
  return 0;
}