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
  Vector2(float x, float y);

  bool operator==(const Vector2 &rhs) const;


  friend Vector2 operator+(const Vector2 &v, const float scalar) {
    return Vector2(v.x + scalar, v.y + scalar);
  }
  friend Vector2 operator+(const float scalar, const Vector2 &v)  {
    return Vector2(v.x + scalar, v.y + scalar);
  }
  Vector2 operator+(const Vector2 &rhs) const;
  Vector2 operator-(const Vector2 &rhs) const;
};
}


#endif //ENGINEPLAYGROUND_VECTOR2_H
