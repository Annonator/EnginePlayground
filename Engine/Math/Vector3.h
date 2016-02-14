//
// Created by Andreas Pohl on 13.02.16.
//

#ifndef ENGINEPLAYGROUND_VECTOR3_H
#define ENGINEPLAYGROUND_VECTOR3_H

namespace Engine {
class Vector3 {
 public:
  float x;
  float y;
  float z;

  Vector3();
  Vector3(float x, float y, float z);
  ~Vector3();

  //Accessor
  inline float &operator[](unsigned int i) { return (&x)[i]; }
  inline float operator[](unsigned int i) const { return (&x)[i]; }

  float Lenght() const;

  //Compare
  bool operator==(const Vector3 &rhs) const;
  bool operator!=(const Vector3 &rhs) const;

  //Addition / Subtraction
  Vector3 operator+(const Vector3 &other) const;
  Vector3 &operator+=(Vector3 &rhs);
  Vector3 operator-(const Vector3 &other) const;
  Vector3 &operator-=(const Vector3 &rhs);

  //Invert
  Vector3 operator-() const;

  //Scalar Multiplication
  Vector3 operator*(const float scalar) const;
  friend Vector3 operator*(const float scalar, const Vector3 &vector) {
    return Vector3(vector.x * scalar,
                   vector.y * scalar,
                   vector.z * scalar);
  }
  Vector3 &operator*=(const float scalar);

  Vector3 operator/(const float scalar) const;
  friend Vector3 operator/(const float scalar, const Vector3 &vector) {
    return Vector3(vector.x / scalar, vector.y / scalar, vector.z / scalar);
  }
  Vector3 &operator/=(const float scalar);
};
}

#endif //ENGINEPLAYGROUND_VECTOR3_H
