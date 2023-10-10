#include "pid_control.hpp"

/**
 * @brief The method is used to compute the new velocity value based on
 * target setpoint and actual velocity and considering the pid constants
 * initialized.
 * @param target_setpoint
 * @param actual_velocity
 * @return double
 */
double PID::PIDCONTROLLER::compute(double target_setpoint,
                                   double actual_velocity, ) {
  

// Calculating the error
    double error = target_velocity - actual_velocity;

    // The value for the Proportional term
    double Pout = kp * error;

    // The value for the Integral term
    integral += error * dt;
    double Iout = ki * integral;

    // Finding Derivative term
    double derivative = (error - pre_error) / dt;
    double Dout = kd * derivative;

    // Calculating total output
    double output = Pout + Iout + Dout;

    return output;

  
}
