//
// Created by Andreas Pohl on 06.03.16.
//

#ifndef ENGINEPLAYGROUND_TIMEGLFWADAPTER_H
#define ENGINEPLAYGROUND_TIMEGLFWADAPTER_H


#include <Platform/Time.h>

namespace Engine {
class TimeGLFWAdapter : public Engine::Time{

 public:
  virtual unsigned int GetTime();
};
}


#endif //ENGINEPLAYGROUND_TIMEGLFWADAPTER_H
