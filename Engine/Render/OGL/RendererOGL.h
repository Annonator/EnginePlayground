//
// Created by Andreas Pohl on 14.02.16.
//

#ifndef ENGINEPLAYGROUND_RENDEREROGL_H
#define ENGINEPLAYGROUND_RENDEREROGL_H


#include <Render/Renderer.h>

namespace Engine {
class RendererOGL: public Renderer {

 public:
  virtual void init(unsigned int width, unsigned int height) override;
};
}


#endif //ENGINEPLAYGROUND_RENDEREROGL_H
