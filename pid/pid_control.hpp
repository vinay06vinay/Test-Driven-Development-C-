/**
 * @file pid_control.hpp
 * @author Vinay Krishna Bukka
 * @brief This method is used to initalize the private variables used ,
 * constructor and method
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */
#ifndef __PID_H__
#define __PID_H__
#include <array>
#include <iostream>
#pragma once
/**
 * @brief PID Controller Class Initialization
 *
 */
namespace PID {
class PIDCONTROLLER {
 public:
  /**
   * @brief Construct a new PIDCONTROLLER object
   *
   * @param kp this value affects proportionally to the error and need to be
   * multiplied with current error
   * @param kd this value brings stability to the system. It needs to be
   * mulitplied with current and previous error
   * @param ki ki constant needs to be multiplied with error, the error which
   * keeps record of all previous errors
   */
  PIDCONTROLLER(double kp, double kd, double ki) : kp(kp), kd(kd), ki(ki){};
  /**
   * @brief The compute method takes in target value and actual or current
   * velocity and computes final velocity by calculating error
   * @param target_setpoint The target velocity
   * @param actual_velocity The actual velocity which is the current velocity.
   * @return double
   */
  double compute(double target_setpoint, double actual_velocity);

 private:
  double kp;
  double ki;
  double kd;
};
}  // namespace PID
#endif
