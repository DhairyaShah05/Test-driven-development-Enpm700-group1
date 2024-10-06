/**
 * @file TestPIDController.cpp
 * @brief Unit tests for the PIDController class.
 * 
 * This file contains unit tests for the PIDController class. The tests are designed
 * to verify that the class behaves as expected, even with the current stubbed 
 * implementation of the compute method. The tests are intentionally expected to fail
 * since the compute method is not yet implemented and currently returns a constant value.
 * 
 * @author Dhairya Shah, Abhishek Ahvad
 * @date 2024
 */

#include <gtest/gtest.h>
#include "PIDController.hpp"

/**
 * @brief Test if the PID controller computes a constant value in the stub.
 * 
 * This test case verifies that the stub implementation of the compute method 
 * currently returns a constant value. The expectation is intentionally set to 
 * cause a failure, as the method always returns 0.0 in the stub.
 * 
 * @test The expected output is set to 1.0, which will fail since the stub 
 * compute method always returns 0.0.
 */
TEST(PIDControllerTest, TestComputeStub) {
  PIDController pid(1.0, 0.5, 0.1);  ///< Initialize PID controller with arbitrary gains.
  EXPECT_EQ(1.0, pid.compute(10.0, 5.0));  ///< Expect failure since the stub returns 0.0.
}

/**
 * @brief Test if the constructor initializes the PID controller correctly.
 * 
 * This test case verifies that the PID controller is properly initialized with the 
 * given gains. However, since the compute method is a stub, the test will fail.
 * 
 * @test The expected output is set to 1.0, which will fail because the stub 
 * method still returns 0.0. This test will pass once the compute method is fully implemented.
 */
TEST(PIDControllerTest, TestInitialization) {
  PIDController pid(2.0, 1.0, 0.5);  ///< Initialize PID controller with specific gains.
  EXPECT_EQ(1.0, pid.compute(15.0, 7.0));  ///< Expect failure since the stub returns 0.0.
}

