/**
 * @file PIDController.hpp
 * @author Apoorv Thapliyal
 *         Amogha Sunil
 * @brief C++ header file for PID controller
 * @version 0.1
 * @date 2024-10-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#pragma once

namespace pid{

/**
 * @brief Class for PID controller
 * 
 */
class PIDController{
    private:

        /**
         * @brief PID gains
         */
        float kp, ki, kd;

        /**
         * @brief Desired velocity
         */
        float desired_vel;

        /**
         * @brief Previous error
         */
        float prev_error=0;

        /**
         * @brief Integral error
         */
        float integral_error=0;

    public:

        /**
         * @brief Constructor a new PIDController object
         * 
         * @param kp: Proportional gain
         * @param ki: Integral gain
         * @param kd: Derivative gain
         */
        PIDController(float kp=1, float ki=1, float kd=1, float setpoint=10){
            this->kp = kp;
            this->ki = ki;
            this->kd = kd;
            this->desired_vel = setpoint;
        }

        /**
         * @brief Function to calculate the error 
         * @return float 
         */
        float compute(float current_vel);
};

}