//
// Created by Andreas Pohl on 14.02.16.
//

#ifndef ENGINEPLAYGROUND_RENDERER_H
#define ENGINEPLAYGROUND_RENDERER_H


namespace Engine {
class Renderer {
 public:
  virtual void init(unsigned int width, unsigned int height) = 0;
};
}


#endif //ENGINEPLAYGROUND_RENDERER_H
