//
// Created by Andreas Pohl on 24.01.16.
//

#include "Vector2.h"


Engine::Vector2::Vector2() : x(1.0), y(1.0) {

}

Engine::Vector2::Vector2(float x, float y) : x(x), y(y) {

}

bool Engine::Vector2::operator==(const Engine::Vector2 &rhs) const {
  return this->x == rhs.x && this->y == rhs.y;
}

Engine::Vector2 Engine::Vector2::operator+(const Engine::Vector2 &rhs) const {
  Vector2 newVector(this->x, this->y);
  newVector.x = newVector.x + rhs.x;
  newVector.y = newVector.y + rhs.y;

  return newVector;
}

Engine::Vector2 Engine::Vector2::operator-(const Engine::Vector2 &rhs) const {
  Vector2 newVector(this->x, this->y);
  newVector.x = newVector.x - rhs.x;
  newVector.y = newVector.y - rhs.y;

  return newVector;
}
