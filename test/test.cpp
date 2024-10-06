#include <gtest/gtest.h>

#include "lib1.hpp"
#include "lib2.hpp"

TEST(dummy_test, this_should_pass) { EXPECT_EQ(1, 1); }

TEST(dummy_test, this_should_pass_too) { EXPECT_EQ(my_function1(3), 3); }

TEST(dummy_test, this_will_no_longer_fail) {
  EXPECT_FLOAT_EQ(my_function2(static_cast<float>(3.2)), 3.84f);
}