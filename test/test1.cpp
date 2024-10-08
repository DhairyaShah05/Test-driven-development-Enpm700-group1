/**
 * @file TestPIDController.cpp
 * @brief Unit tests for the PIDController class.
 * 
 * This file contains unit tests for the PIDController class. The tests are designed
 * to verify the basic functionality of the PID controller.
 * 
 * @author Dhairya Shah, Abhishek Avhad
 * @date 2024
 */

#include <gtest/gtest.h>
#include "PIDController.hpp"

/**
 * @brief Test if the PID controller computes the correct output.
 * 
 * This test case verifies that the compute method returns the expected output
 * for a given set of inputs and PID gains.
 */
TEST(PIDControllerTest, TestCompute) {
    PIDController pid(1.0, 0.1, 0.05);  // Kp = 1.0, Ki = 0.1, Kd = 0.05
    double output = pid.compute(10.0, 8.0);
    std::cout << "Actual output: " << output << std::endl;
    EXPECT_NEAR(2.0, output, 0.001);  // Expected output is approximately 2.0
}

/**
 * @brief Test if the getter and setter methods work correctly.
 * 
 * This test case verifies that the getter and setter methods for PID gains
 * function as expected.
 */
TEST(PIDControllerTest, TestGettersAndSetters) {
    PIDController pid(1.0, 0.5, 0.1);
    
    EXPECT_DOUBLE_EQ(1.0, pid.getKp());
    EXPECT_DOUBLE_EQ(0.5, pid.getKi());
    EXPECT_DOUBLE_EQ(0.1, pid.getKd());
    
    pid.setKp(2.0);
    pid.setKi(0.7);
    pid.setKd(0.2);
    
    EXPECT_DOUBLE_EQ(2.0, pid.getKp());
    EXPECT_DOUBLE_EQ(0.7, pid.getKi());
    EXPECT_DOUBLE_EQ(0.2, pid.getKd());
}
