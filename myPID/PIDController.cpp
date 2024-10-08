/**
 * @file PIDController.cpp
 * @brief Implementation file for the PIDController class.
 * 
 * This file contains the implementation of the PIDController class methods
 * declared in PIDController.hpp. It includes the full implementation of the
 * PID control algorithm in the compute method, as well as getter and setter
 * methods for the PID gains.
 * 
 * @author Dhairya
 * @date 2024
 * @copyright Acme Robotics
 */

#include "../include/PIDController.hpp"
#include <iostream>

// Constructor implementation is not needed as it's defined inline in the header

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

double PIDController::getKp() const {
    return Kp;
}

void PIDController::setKp(double kp) {
    Kp = kp;
}

double PIDController::getKi() const {
    return Ki;
}

void PIDController::setKi(double ki) {
    Ki = ki;
}

double PIDController::getKd() const {
    return Kd;
}

void PIDController::setKd(double kd) {
    Kd = kd;
}

