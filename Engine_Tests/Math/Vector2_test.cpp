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

  EXPECT_EQ(lhs, rhs);
  EXPECT_EQ(rhs, lhs);

  rhs.x = 10.0;

  EXPECT_NE(lhs, rhs);
  EXPECT_NE(rhs, lhs);
}

TEST(engine_test_math_vector2, overload_add) {
  Vector2 lhs(1.0, 1.0);
  Vector2 rhs(2.0, 2.0);
  Vector2 control(3.0, 3.0);

  EXPECT_TRUE(((rhs + lhs) == control));
  EXPECT_TRUE(((lhs + rhs) == control));
  EXPECT_TRUE(((lhs + lhs + rhs) == (lhs + rhs + lhs)));
  EXPECT_FALSE(((lhs + rhs) == (control + rhs)));
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


TEST(engine_test_math_vector2, accessor_Test) {
  Vector2 test;

  EXPECT_EQ(test.x, test[0]);
  EXPECT_EQ(test.y, test[1]);

  test[0] = test[0] + 1;
  test[1] = test[1] + 2;

  EXPECT_EQ(test.x, test[0]);
  EXPECT_EQ(test.y, test[1]);

}
#pragma clang diagnostic pop