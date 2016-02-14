//
// Created by Andreas Pohl on 13.02.16.
//

#include <math.h>
#include "Vector3.h"

using namespace Engine;

Vector3::Vector3() : x(1.0), y(1.0), z(1.0) { }
Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) { }
Vector3::~Vector3() { }

float Vector3::Lenght() const {
  return sqrtf((this->x * this->x) + (this->y * this->y) + (this->z * this->z));
}

bool Vector3::operator==(const Vector3 &rhs) const {
  return ((this->x == rhs.x) && (this->y == rhs.y) && (this->z == rhs.z));
}

bool Vector3::operator!=(const Vector3 &rhs) const {
  return ((this->x == rhs.x) || (this->y == rhs.y) || (this->z == rhs.z));
}

Vector3 Vector3::operator+(const Vector3 &other) const {
  return Vector3((this->x + other.x), (this->y + other.y), (this->z + other.z));
}

Vector3 &Vector3::operator+=(const Vector3 &rhs) {
  this->x += rhs.x;
  this->y += rhs.y;
  this->z += rhs.z;

  return *this;
}

Vector3 Vector3::operator-(const Vector3 &other) const {
  return Vector3((this->x - other.x), (this->y - other.y), (this->z - other.z));
}

Vector3 &Vector3::operator-=(const Vector3 &rhs) {
  this->x -= rhs.x;
  this->y -= rhs.y;
  this->z -= rhs.z;

  return *this;
}

Vector3 Vector3::operator-() const {
  return Vector3(-x, -y, -z);
}

Vector3 Vector3::operator*(const float scalar) const {
  return Vector3(this->x * scalar, this->y * scalar, this->z * scalar);
}

Vector3 &Vector3::operator*=(const float scalar) {
  this->x *= scalar;
  this->y *= scalar;
  this->z *= scalar;

  return *this;
}

Vector3 Vector3::operator/(const float scalar) const {
  return Vector3(this->x / scalar, this->y / scalar, this->z / scalar);
}

Vector3 &Vector3::operator/=(const float scalar) {
  this->x /= scalar;
  this->y /= scalar;
  this->z /= scalar;

  return *this;
}

void Vector3::Set(float x, float y, float z) {
  this->x = x;
  this->y = y;
  this->z = z;
}
