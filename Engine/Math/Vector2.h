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

  //Accessor
  inline float &operator[](unsigned int index) { return (&(this->x))[index]; }
  inline float operator[](unsigned int index) const { return (&(this->x))[index]; }

  float Length() const;

  //Compare
  bool operator==(const Vector2 &rhs) const;
  bool operator!=(const Vector2 &rhs) const;

  //Addition / Subtraction
  friend Vector2 operator+(const Vector2 &v, const float scalar) { return Vector2(v.x + scalar, v.y + scalar); }
  friend Vector2 operator+(const float scalar, const Vector2 &v) { return (v + scalar); }
  Vector2 operator+(const Vector2 &rhs) const;
  Vector2 &operator+=(const Vector2 &rhs);

  Vector2 operator-(const Vector2 &rhs) const;
  Vector2 &operator-=(const Vector2 &rhs);

  //Scalar Multiplication
  Vector2 operator*(const float scalar) const;
  friend Vector2 operator*(const float scalar, const Vector2 &rhs) { return Vector2(scalar * rhs.x, scalar * rhs.y); }
  Vector2 &operator*=(const float scalar);

  Vector2 operator/(const float scalar) const;
  Vector2 &operator/=(const float scalar);

  //Vector specific
  float Dot(const Vector2 &vector) const;

  void Set(const float x, const float y);
};
}

#endif //ENGINEPLAYGROUND_VECTOR2_H
