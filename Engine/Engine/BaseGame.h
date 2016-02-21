//
// Created by Andreas Pohl on 18.02.16.
//

#ifndef ENGINEPLAYGROUND_BASEGAME_H
#define ENGINEPLAYGROUND_BASEGAME_H

#include <Platform/Time.h>

namespace Engine {

//Forward Declaration
class Clock;

class BaseGame {
 public:
  void Update();
  void Display();
 protected:
  BaseGame(Time &time);
  virtual ~BaseGame();

  virtual void UpdateSimulation(float deltaTime) = 0;
  virtual void Render() = 0;

  bool isRunning;
  bool quit;
  Clock *gameClock;
};
}


#endif //ENGINEPLAYGROUND_BASEGAME_H
