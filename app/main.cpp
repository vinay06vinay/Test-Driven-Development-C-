/**
 * @file main.cpp
 * @author Vinay Krishna Bukka (Github Username: vinay06vinay), Suryavardhan
 * Chappidi (Github Username: SuryaVC)
 * @brief The goal of the function is to compute the new velocity value using a
 * PID controller
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cmath>
#include <iostream>

#include "../pid/pid_control.hpp"

/**
 * @brief Used to maintain the PID Class
 *
 * @return double
 */
int main() {
  // Initializing random pid constants, Can be modified upon tuning
  double kp = 1.0;
  double kd = 0.5;
  double ki = 0.0;
  // An object of class pid controller is created with the constructor values
  PID::PIDCONTROLLER pid_control(kp, kd, ki);
  double target_setpoint{2.0};
  double actual_velocity{5.9};
  double final_velcoity;
  // Calling the method compute of class pic to get the new velocity based on
  // target setpoint and actual velocity
  final_velcoity = pid_control.compute(target_setpoint, actual_velocity);
  std::cout << final_velcoity;
  return final_velcoity;
}
