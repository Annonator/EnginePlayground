//
// Created by Andreas Pohl on 18.02.16.
//

#ifndef ENGINEPLAYGROUND_BASEGAME_H
#define ENGINEPLAYGROUND_BASEGAME_H

namespace Engine {
class BaseGame {
 public:

  static BaseGame *game;
 protected:
  BaseGame();
  virtual ~BaseGame();

};
//non-const static data member must be initialized out of line
BaseGame *BaseGame::game = nullptr;
}


#endif //ENGINEPLAYGROUND_BASEGAME_H
