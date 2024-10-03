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
#ifndef _PIDCONTROLLER_
#define _PIDCONTROLLER_

namespace pid {

/**
 * @brief Class for PID controller
 *
 */
class PIDController {
 public:
  /**
   * @brief Constructor a new PIDController object
   *
   * @param kp: Proportional gain
   * @param ki: Integral gain
   * @param kd: Derivative gain
   */
  PIDController(float kp, float ki, float kd, float setPoint);

  /**
   *  @brief destructor
   */
  ~PIDController();

  /**
   * @brief Function to calculate the error
   * @return float
   @startuml
   * start
   * :Input currentVelocity;
   * :Calculate Error;
   * :Update Integral;
   * :Calculate Derivative;
   * :Compute Output;
   * :Update previousError;
   * :Return output;
   * end
   * @enduml
   */
  float compute(float currentVelocity);

  /**
   * @brief Function to set Kp externally
   */
  void setKp(float kp);

  /**
   * @brief Function to set Ki externally
   */
  void setKi(float ki);

  /**
   * @brief Function to set Kd externally
   */
  void setKd(float kd);

  /**
   * @brief Function to get Kp
   */
  float getKp();

  /**
   * @brief Function to get Ki
   */
  float getKi();

  /**
   * @brief Function to get Kd
   */
  float getKd();

 private:
  /**
   * @brief PID gain Proportional
   */
  float mKp{0.0};

  /**
   * @brief PID gain integral
   */
  float mKi{0.0};

  /**
   * @brief PID gain derivative
   */
  float mKd{0.0};

  /**
   * @brief Desired velocity
   */
  float mSetPoint{0.0};

  /**
   * @brief Previous error
   */
  float mPreviousError{0.0};

  /**
   * @brief Integral
   */
  float mIntegral{0.0};
};
}  // namespace pid

#endif