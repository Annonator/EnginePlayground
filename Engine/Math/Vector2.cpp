//
// Created by Andreas Pohl on 24.01.16.
//

#include <math.h>
#include "Vector2.h"

using namespace Engine;

Vector2::Vector2() : x(1.0), y(1.0) {

}

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {

}

float Vector2::Length() const {
  return sqrtf((this->x * this->x) + (this->y * this->y));
}

Vector2 &Vector2::operator+=(const Vector2 &rhs) {
  this->x += rhs.x;
  this->y += rhs.y;

  return *this;
}

Vector2 &Vector2::operator-=(const Vector2 &rhs) {
  this->x -= rhs.x;
  this->y -= rhs.y;

  return *this;
}

Vector2 &Vector2::operator*=(const float scalar) {
  this->x *= scalar;
  this->y *= scalar;

  return *this;
}

Vector2 &Vector2::operator/=(const float scalar) {
  this->x /= scalar;
  this->y /= scalar;

  return *this;
}

float Vector2::Dot(const Vector2 &vector) const {
  return (this->x * vector.x + this->y * vector.y);
}

void Vector2::Set(const float x, const float y) {
  this->x = x;
  this->y = y;
}
