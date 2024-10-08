/**
 * @file PIDController.hpp
 * @brief Header file for the PIDController class.
 * 
 * This file contains the declaration of the PIDController class, which is responsible 
 * for computing a control action (such as velocity) based on a given setpoint and 
 * actual measured value using proportional, integral, and derivative (PID) gains.
 * The compute method is currently stubbed and will need to be fully implemented 
 * to calculate the control output based on PID control logic.
 * 
 * @author Dhairya
 * @date 2024
 * @copyright Acme Robotics
 */

#ifndef PIDCONTROLLER_HPP_
#define PIDCONTROLLER_HPP_

/**
 * @class PIDController
 * @brief A class to implement a PID (Proportional-Integral-Derivative) controller.
 * 
 * The PIDController class provides functionality to compute a new control output 
 * based on the difference between a desired setpoint and an actual measured value 
 * (such as velocity). The controller uses three gain parameters (Kp, Ki, Kd) 
 * that influence the proportional, integral, and derivative terms of the control 
 * output. Currently, the compute method is stubbed and returns a constant value.
 * 
 * @see PIDController::compute
 * @see PIDController::setKp
 * @see PIDController::setKi
 * @see PIDController::setKd
 */
class PIDController {
 private:
  double Kp;  ///< Proportional gain used in the PID controller.
  double Ki;  ///< Integral gain used in the PID controller.
  double Kd;  ///< Derivative gain used in the PID controller.

 public:
  /**
   * @brief Constructor to initialize the PID controller with specific gains.
   * 
   * This constructor initializes the PID controller by setting the proportional, 
   * integral, and derivative gains (Kp, Ki, Kd) to the provided values. These 
   * gains influence the behavior of the PID control algorithm.
   * 
   * @param kp Proportional gain to be set.
   * @param ki Integral gain to be set.
   * @param kd Derivative gain to be set.
   * @see PIDController::Kp
   * @see PIDController::Ki
   * @see PIDController::Kd
   */
  PIDController(double kp, double ki, double kd) : Kp(kp), Ki(ki), Kd(kd) {}

  /**
   * @brief Compute the control action based on the setpoint and actual value.
   * 
   * This method calculates a new control action (e.g., velocity) based on the 
   * difference between the desired setpoint and the actual measured value. 
   * The compute method currently returns a constant value and does not yet 
   * implement the full PID control logic. Once implemented, it will use the 
   * Kp, Ki, and Kd gains to compute a control output.
   * 
   * @param setpoint The desired target value (e.g., desired velocity).
   * @param actual The actual measured value (e.g., current velocity).
   * @return The computed control action (currently returns a constant value of 0.0).
   * @see PIDController::Kp
   * @see PIDController::Ki
   * @see PIDController::Kd
   */
  double compute(double setpoint, double actual);

  /**
   * @brief Get the proportional gain value (Kp).
   * 
   * This method returns the proportional gain (Kp) used in the controller.
   * 
   * @return The proportional gain value currently set in the controller.
   * @see PIDController::setKp
   */
  double getKp() const;

  /**
   * @brief Get the integral gain value (Ki).
   * 
   * This method returns the integral gain (Ki) used in the controller.
   * 
   * @return The integral gain value currently set in the controller.
   * @see PIDController::setKi
   */
  double getKi() const;

  /**
   * @brief Get the derivative gain value (Kd).
   * 
   * This method returns the derivative gain (Kd) used in the controller.
   * 
   * @return The derivative gain value currently set in the controller.
   * @see PIDController::setKd
   */
  double getKd() const;

  /**
   * @brief Set the proportional gain (Kp).
   * 
   * This method allows the user to update the proportional gain (Kp) after the 
   * PIDController object has been created.
   * 
   * @param kp New proportional gain value to be set.
   * @see PIDController::getKp
   */
  void setKp(double kp);
  /**
   * @brief Set the integral gain (Ki).
   * 
   * This method allows the user to update the integral gain (Ki) after the 
   * PIDController object has been created.
   * 
   * @param ki New integral gain value to be set.
   * @see PIDController::getKi
   */
  void setKi(double ki);

  /**
   * @brief Set the derivative gain (Kd).
   * 
   * This method allows the user to update the derivative gain (Kd) after the 
   * PIDController object has been created.
   * 
   * @param kd New derivative gain value to be set.
   * @see PIDController::getKd
   */
  void setKd(double kd);
};

#endif  // PIDCONTROLLER_HPP_
