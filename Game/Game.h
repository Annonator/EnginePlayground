//
// Created by Andreas Pohl on 18.02.16.
//

#ifndef ENGINEPLAYGROUND_GAME_H
#define ENGINEPLAYGROUND_GAME_H

#include <Engine/BaseGame.h>

class Game : public Engine::BaseGame{
 public:
  Game(Engine::Time &time) : BaseGame(time) { };
  ~Game();

 protected:
  virtual void UpdateSimulation(float deltaTime);
  virtual void Render();
};


#endif //ENGINEPLAYGROUND_GAME_H
