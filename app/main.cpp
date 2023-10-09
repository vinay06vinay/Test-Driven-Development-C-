#include "../pid/pid_control.hpp"
#include <iostream>
#include <cmath>

int main() {
  double kp = 1.0;
  double kd = 0.55;
  double ki = 0.002;
  PID::PIDCONTROLLER pid_control(kp,kd,ki);
  double target_setpoint{2.0};
  double actual_velocity{20.9};
  double final_velcoity;
  final_velcoity = pid_control.compute(double target_setpoint, double actual_velocity);

}
