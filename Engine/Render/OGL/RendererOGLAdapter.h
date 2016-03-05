//
// Created by Andreas Pohl on 05.03.16.
//

#ifndef ENGINEPLAYGROUND_RENDERERSDL2ADAPTER_H
#define ENGINEPLAYGROUND_RENDERERSDL2ADAPTER_H


#include <Render/Renderer.h>

namespace Engine {
class RendererSDL2Adapter: public Engine::Renderer {
 public:
  void init(unsigned int width, unsigned int height) override;
  void initSDL();
};
}


#endif //ENGINEPLAYGROUND_RENDERERSDL2ADAPTER_H
