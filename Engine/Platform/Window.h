//
// Created by Andreas Pohl on 05.03.16.
//

#ifndef ENGINEPLAYGROUND_WINDOW_H
#define ENGINEPLAYGROUND_WINDOW_H


namespace Engine {
class Window {
 public:
  Window();

 protected:
  virtual bool initWindow() = 0;

  unsigned int width;
  unsigned int height;

};
}


#endif //ENGINEPLAYGROUND_WINDOW_H
