/**
 * @file PIDController.cpp
 * @author Apoorv Thapliyal
 *         Amogha Sunil
 * @brief C++ source file for PID controller
 * @version 0.1
 * @date 2024-10-02
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "PIDController.hpp"

pid::PIDController::PIDController(float kp, float ki, float kd, float setPoint)
    : mKp(1.0), mKi(1.0), mKd(1.0), mSetPoint(10.0) {
    /*Constructor*/
    mKp = kp;
    mKi = ki;
    mKd = kd;
    mSetPoint = setPoint;
}

/**
 * @brief Function to calculate the control input
 * @return float
 */
float pid::PIDController::compute(float current_vel) {
    float error = mSetPoint - current_vel;

    // Calculate the integral of the errors
    mIntegral += error * mTimeStep;

    // Calculate the derivative of the error
    double derivative = (error - mPreviousError) / mTimeStep;

    // Compute the PID control output
    double output = mKp * error + mKi * mIntegral + mKd * derivative;

    // Update the previous error
    mPreviousError = error;

    return static_cast<float>(output);
}

void pid::PIDController::setKp(float kp) { mKp = kp; }

void pid::PIDController::setKi(float ki) { mKi = ki; }

void pid::PIDController::setKd(float kd) { mKd = kd; }

float pid::PIDController::getKp() const { return mKp; }

float pid::PIDController::getKi() const { return mKi; }

float pid::PIDController::getKd() { return mKd; }

pid::PIDController::~PIDController() {
    /*Destructor*/
}
