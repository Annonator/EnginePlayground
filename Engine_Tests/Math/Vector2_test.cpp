//
// Created by Andreas Pohl on 24.01.16.
//

#include "gtest/gtest.h"
#include "Math/Vector2.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
using namespace Engine;

TEST(engine_test_math_vector2, test_standardcons_vector2) {
  Vector2 testVector;

  ASSERT_EQ(1.0, testVector.x);
  ASSERT_EQ(1.0, testVector.y);
}


TEST(engine_test_math_vector2, test_cons_vector2) {
  Vector2 testVector(2.0, 3.0);

  ASSERT_EQ(2.0, testVector.x);
  ASSERT_EQ(3.0, testVector.y);
}

TEST(engine_test_math_vector2, test_equal_Test) {
  Vector2 lhs(1.0, 1.0);
  Vector2 rhs(1.0, 1.0);

  ASSERT_EQ(lhs, rhs);
  ASSERT_EQ(rhs, lhs);

  rhs.x = 10.0;

  ASSERT_NE(lhs, rhs);
  ASSERT_NE(rhs, lhs);
}

TEST(engine_test_math_vector2, overload_add) {
  Vector2 lhs(1.0, 1.0);
  Vector2 rhs(2.0, 2.0);
  Vector2 control(3.0, 3.0);

  EXPECT_TRUE(((rhs + lhs) == control));
  EXPECT_TRUE(((lhs + rhs) == control));
  EXPECT_TRUE(((lhs + lhs + rhs) == (lhs + rhs + lhs)));
  EXPECT_FALSE(((lhs + rhs) == (control + rhs)));

  lhs += rhs;

  EXPECT_EQ(control, lhs);
}

TEST(engine_test_math_vector2, overload_sub) {
  Vector2 lhs(3.0, 3.0);
  Vector2 rhs(1.0, 1.0);
  Vector2 control(2.0, 2.0);

  EXPECT_TRUE((lhs - rhs) == control);
  EXPECT_FALSE((rhs - lhs) == control);
  EXPECT_EQ(Vector2(-2.0, -2.0), (rhs - lhs));

  lhs -= rhs;
  EXPECT_EQ(control, lhs);
}

TEST(engine_test_math_vector2, overload_add_scalar) {
  Vector2 lhs(1.0, 1.0);
  Vector2 control(11.0, 11.0);

  EXPECT_TRUE((lhs + 10 == 10 + lhs));
  EXPECT_TRUE((lhs + 10 == control));
  EXPECT_TRUE((10 + lhs == control));
  EXPECT_FALSE(10 + lhs == 5 + lhs);
  EXPECT_FALSE(20 + lhs == control);
}


TEST(engine_test_math_vector2, accessor_Test) {
  Vector2 test;

  EXPECT_EQ(test.x, test[0]);
  EXPECT_EQ(test.y, test[1]);

  test[0] = test[0] + 1;
  test[1] = test[1] + 2;

  EXPECT_EQ(test.x, test[0]);
  EXPECT_EQ(test.y, test[1]);
}


TEST(engine_test_math_vector2, overload_mul) {
  Vector2 vector(2.0, 2.0);
  float scalar = 3;
  Vector2 control(6.0, 6.0);

  EXPECT_EQ(control, vector * scalar);
  EXPECT_EQ(control, scalar * vector);

  vector *= scalar;

  EXPECT_EQ(control, vector);
}

TEST(engine_test_math_vector2, overload_div) {
  Vector2 vector(4.0, 4.0);
  float scalar = 2;
  Vector2 control(2.0, 2.0);

  EXPECT_EQ(control, vector / scalar);

  vector /= scalar;

  EXPECT_EQ(control, vector);
}

TEST(engine_test_math_vector2, set) {
  float x = 10.0;
  float y = 11.0;

  Vector2 vector;
  Vector2 control(x, y);

  vector.Set(x, y);

  EXPECT_EQ(control, vector);
}


TEST(engine_test_math_vector2, DotPoduct) {
  Vector2 lhs(2.0, 3.0);
  Vector2 rhs(4.0, 5.0);
  float control = lhs.x * rhs.x + lhs.y * rhs.y;

  float nase = lhs.Dot(rhs);
  EXPECT_EQ(control, nase);
}
#pragma clang diagnostic pop