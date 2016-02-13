//
// Created by Andreas Pohl on 24.01.16.
//

#ifndef ENGINEPLAYGROUND_VECTOR2_H
#define ENGINEPLAYGROUND_VECTOR2_H

namespace Engine {
class Vector2 {
 public:
  float x;
  float y;

  Vector2();
  Vector2(float _x, float _y);

  float &operator[](unsigned int index) { return (&(this->x))[index]; }
  float operator[](unsigned int index) const { return (&(this->x))[index]; }

  bool operator==(const Vector2 &rhs) const { return this->x == rhs.x && this->y == rhs.y; }

  bool operator!=(const Vector2 &rhs) const { return this->x != rhs.x || this->y != rhs.y; }

  friend Vector2 operator+(const Vector2 &v, const float scalar) { return Vector2(v.x + scalar, v.y + scalar); }

  friend Vector2 operator+(const float scalar, const Vector2 &v) { return Vector2(v.x + scalar, v.y + scalar); }

  Vector2 operator+(const Vector2 &rhs) const { return Vector2(this->x + rhs.x, this->y + rhs.y); }

  Vector2 operator-(const Vector2 &rhs) const { return Vector2(this->x - rhs.x, this->y - rhs.y); }
};
}

#endif //ENGINEPLAYGROUND_VECTOR2_H
