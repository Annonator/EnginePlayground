//
// Created by Andreas Pohl on 14.02.16.
//

#include "gtest/gtest.h"
#include "Math/Vector3.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
using namespace Engine;

TEST(engine_test_math_vector3, constructor) {
  Vector3 defaultConst;
  Vector3 parameterConst(2.0, 3.0, 4.0);

  ASSERT_EQ(1.0, defaultConst.x);
  ASSERT_EQ(1.0, defaultConst.y);
  ASSERT_EQ(1.0, defaultConst.z);

  ASSERT_EQ(2.0, parameterConst.x);
  ASSERT_EQ(3.0, parameterConst.y);
  ASSERT_EQ(4.0, parameterConst.z);
}


TEST(engine_test_math_vector3, operator_equal) {
  Vector3 lhs;
  Vector3 rhs;
  Vector3 control(2.0, 2.0, 2.0);

  EXPECT_TRUE(lhs == rhs);
  EXPECT_TRUE(rhs == lhs);
  EXPECT_FALSE(lhs == control);
}


TEST(engine_test_math_vector3, Set) {
  float x = 10;
  float y = 5;
  float z = 9;

  Vector3 vector;

  vector.x = x;
  vector.y = y;
  vector.z = z;

  EXPECT_EQ(x, vector.x);
  EXPECT_EQ(y, vector.y);
  EXPECT_EQ(z, vector.z);

  x++;
  y--;
  z++;

  vector.Set(x, y, z);

  EXPECT_EQ(x, vector.x);
  EXPECT_EQ(y, vector.y);
  EXPECT_EQ(z, vector.z);
}

TEST(engine_test_math_vector3, operator_add_and_sub) {
  float x = 2;
  float y = 3;
  float z = 4;

  Vector3 lhs(x, y, z);
  Vector3 rhs(x, y, z);
  Vector3 control(x + x, y + y, z + z);

  EXPECT_EQ(control, (lhs + rhs));
  EXPECT_EQ(control, (rhs + lhs));

  lhs.Set(x + x, y + y, z + z);

  EXPECT_EQ(control, lhs);

  lhs += rhs;

  EXPECT_EQ((control + rhs), lhs);

  lhs -= rhs;

  EXPECT_EQ(control, lhs);
}

TEST(engine_test_math_vector3, operator_mul_and_div) {
  float x = 2;
  float y = 3;
  float z = 4;
  float scalar = 5;

  Vector3 lhs(x, y, z);
  Vector3 rhs(x, y, z);
  Vector3 control(x * scalar, y * scalar, z * scalar);

  EXPECT_EQ(control, (lhs * scalar));
  EXPECT_EQ(control, (scalar * lhs));

  //lhs *= sc
}


#pragma clang diagnostic pop