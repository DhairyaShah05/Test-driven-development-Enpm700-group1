#include "PIDController.hpp"
#include <iostream>
#include <iomanip>

int main() {
    // Initialize PID controller with Kp=0.1, Ki=0.01, Kd=0.5
    PIDController pid(0.1, 0.01, 0.5);

    double val = 20.0;
    double setpoint = 0.0;

    // Run the simulation for 100 iterations
    for (int i = 0; i < 100; i++) {
        double inc = pid.compute(setpoint, val);
        
        // Print current value and increment
        std::cout << "val: " << std::setw(7) << std::fixed << std::setprecision(3) << val
                  << " inc: " << std::setw(7) << inc << std::endl;
        
        // Update the value
        val += inc;
    }

    return 0;
}

