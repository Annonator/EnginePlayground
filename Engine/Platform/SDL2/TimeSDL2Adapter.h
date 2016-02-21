//
// Created by Andreas Pohl on 21.02.16.
//

#ifndef ENGINEPLAYGROUND_TIMESDL2_H
#define ENGINEPLAYGROUND_TIMESDL2_H


#include <Platform/Time.h>

namespace Engine{
class TimeSDL2Adapter: public Engine::Time{
 public:
  TimeSDL2Adapter();
  ~TimeSDL2Adapter();
  virtual unsigned int GetTime();
};
}


#endif //ENGINEPLAYGROUND_TIMESDL2_H
