//
// Created by Andreas Pohl on 21.02.16.
//

#ifndef ENGINEPLAYGROUND_CLOCK_H
#define ENGINEPLAYGROUND_CLOCK_H


#include <Platform/Time.h>

namespace Engine {
class Clock {
 public:
  Clock(Engine::Time &time);
  virtual ~Clock();

  void Update();

  float GetElapsedTime();

 protected:
  float currentTime;
  float elapsedTime;

  Time &time;
};
}


#endif //ENGINEPLAYGROUND_CLOCK_H
