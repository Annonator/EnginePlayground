//
// Created by Andreas Pohl on 24.01.16.
//

#include "gtest/gtest.h"
#include "Math/Vector2.h"

using namespace Engine;

TEST(engine_test_math_vector2, test_standardcons_vector2) {
  Vector2 *testVector = new Engine::Vector2();

  EXPECT_EQ(testVector->x, 1.0);
  EXPECT_EQ(testVector->y, 1.0);
}


TEST(engine_test_math_vector2, test_cons_vector2) {
  Vector2 testVector(2.0, 3.0);

  EXPECT_EQ(testVector.x, 2.0);
  EXPECT_EQ(testVector.y, 3.0);
}

TEST(engine_test_math_vector2, overload_add) {
  Vector2 lhs(1.0, 1.0);
  Vector2 rhs(2.0, 2.0);
  Vector2 controll(3.0, 3.0);

  EXPECT_TRUE(((rhs+lhs) == controll));
  EXPECT_TRUE(((lhs+rhs) == controll));
  EXPECT_TRUE(((lhs+lhs+rhs) == (lhs+rhs+lhs)));
  EXPECT_FALSE(((lhs + rhs) == (controll + rhs)));
}


TEST(engine_test_math_vector2, overload_add_scalar) {
  Vector2 lhs(1.0, 1.0);
  Vector2 controll(11.0, 11.0);

  EXPECT_TRUE((lhs + 10 == 10 + lhs));
  EXPECT_TRUE((lhs + 10 == controll));
  EXPECT_TRUE((10 + lhs == controll));
  EXPECT_FALSE(10 + lhs == 5 + lhs);
  EXPECT_FALSE(20 + lhs == controll);
}
