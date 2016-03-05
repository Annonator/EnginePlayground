//
// Created by Andreas Pohl on 05.03.16.
//

#ifndef ENGINEPLAYGROUND_WINDOWOGLADAPTER_H
#define ENGINEPLAYGROUND_WINDOWOGLADAPTER_H

#include <Render/Window.h>
#include <SDL_video.h>

namespace Engine {
class WindowOGLAdapter: public Window {
 public:
  WindowOGLAdapter();
  ~WindowOGLAdapter();

 protected:
  virtual bool initWindow();

 private:
  SDL_Window *window;
  SDL_GLContext context;
};
}


#endif //ENGINEPLAYGROUND_WINDOWOGLADAPTER_H
