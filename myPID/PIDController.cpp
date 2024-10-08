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
#include <cmath>
#include <iostream>  // Added for std::cout

// Constructor implementation is not needed as it's defined inline in the header

double PIDController::compute(double setpoint, double actual) {
    static double lastError = 0.0;
    static double integral = 0.0;
    
    // Calculate error
    double error = setpoint - actual;
    
    // Calculate integral
    integral += error;
    
    // Calculate derivative
    double derivative = error - lastError;
    
    // Calculate PID output
    double output = Kp * error + Ki * integral + Kd * derivative;
    
    // Print intermediate values for debugging
    std::cout << "Error: " << error << ", Integral: " << integral 
              << ", Derivative: " << derivative << std::endl;
    std::cout << "Kp*error: " << (Kp*error) << ", Ki*integral: " << (Ki*integral) 
              << ", Kd*derivative: " << (Kd*derivative) << std::endl;
    
    // Update last error for next iteration
    lastError = error;
    
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

