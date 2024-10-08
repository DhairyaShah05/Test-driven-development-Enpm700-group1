/**
 * @file PIDController.cpp
 * @brief Implementation file for the PIDController class.
 * 
 * This file contains the implementation of the PIDController class methods
 * declared in PIDController.hpp. It includes the full implementation of the
 * PID control algorithm in the compute method.
 * 
 * @author Dhairya
 * @date 2024
 * @copyright Acme Robotics
 */

#include "../include/PIDController.hpp"
#include <iostream>

double PIDController::compute(double setpoint, double actual) {
    double error = setpoint - actual;
    
    // P term
    double pTerm = Kp * error;
    
    // I term
    integral += error;
    double iTerm = Ki * integral;
    
    // D term
    double derivative = error - lastError;
    double dTerm = Kd * derivative;
    
    // Calculate PID output
    double output = pTerm + iTerm + dTerm;
    
    // Update last error for next iteration
    lastError = error;
    
    // Debug output
    std::cout << "PID Computation:" << std::endl;
    std::cout << "  Setpoint: " << setpoint << ", Actual: " << actual << std::endl;
    std::cout << "  Error: " << error << ", Integral: " << integral << ", Derivative: " << derivative << std::endl;
    std::cout << "  P-term: " << pTerm << ", I-term: " << iTerm << ", D-term: " << dTerm << std::endl;
    std::cout << "  Output: " << output << std::endl;
    
    return output;
}

