#ifndef __PID_H__
#define __PID_H__
#include <array>
#include <iostream>
#pragma once

namespace PID{
class PIDCONTROLLER{

    public: 
        PIDCONTROLLER(double kp, double kd, double ki) : kp(kp) ,kd(kd),ki(ki) {};
        double compute(double target_setpoint, double actual_velocity);
    private:
        double kp;
        double ki;
        double kd;

};
}
#endif
