//
// Created by Andreas Pohl on 24.01.16.
//

#include "gtest/gtest.h"
#include "Math/Vector2.h"

TEST(engine_test_math, test_standardcons_vector2) {
  Engine::Vector2 *testVector = new Engine::Vector2();

  ASSERT_EQ(testVector->x, 1.0);
  ASSERT_EQ(testVector->y, 1.0);
}


TEST(engine_test_math, test_cons_vector2) {
  Engine::Vector2 *testVector = new Engine::Vector2(2.0, 3.0);

  ASSERT_EQ(testVector->x, 2.0);
  ASSERT_EQ(testVector->y, 3.0);
}
