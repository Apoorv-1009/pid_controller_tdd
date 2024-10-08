#include <gtest/gtest.h>

#include "PIDController.hpp"

/**
 * @brief Test control input when already at setpoint
 */
TEST(pid_test_1, value_test) {
    pid::PIDController PID(1, 1, 1, 10);
    EXPECT_EQ(PID.compute(10), 0);
}

/**
 * @brief Test control input when at 0 velocity
 */
TEST(pid_test_2, value_test) {
    pid::PIDController PID(1, 1, 1, 10);
    // 1*(10-0) + 1*(0+10*0.1) + 10/0.1*1 = 111
    EXPECT_EQ(PID.compute(0), 111);
}

/**
 * @brief Test control input when at 0 velocity
 */
TEST(pid_test_3, value_test) {
    pid::PIDController PID(1, 1, 1, 10);
    PID.setKd(3.0);
    EXPECT_EQ(PID.getKd(), 3.0);
}

/**
 * @brief Test setKp function
 * 
 */
TEST(pid_test_4, value_test) {
    pid::PIDController PID(1, 1, 1, 10);
    PID.setKp(3.0);
    EXPECT_EQ(PID.getKp(), 3.0);
}

/**
 * @brief Test setKi function
 * 
 */
TEST(pid_test_5, value_test) {
    pid::PIDController PID(1, 1, 1, 10);
    PID.setKi(3.0);
    EXPECT_EQ(PID.getKi(), 3.0);    
}

/**
 * @brief Test setKd function
 * 
 */
TEST(pid_test_6, value_test) {
    pid::PIDController PID(1, 1, 1, 10);
    PID.setKd(3.0);
    EXPECT_EQ(PID.getKd(), 3.0);
}

/**
 * @brief Test getKp function
 * 
 */
TEST(pid_test_7, value_test) {
    pid::PIDController PID(1.0, 1.0, 1.0, 10.0);
    EXPECT_EQ(PID.getKp(), 1.0);
}

/**
 * @brief Test getKi function
 * 
 */
TEST(pid_test_8, value_test) {
    pid::PIDController PID(1.0, 1.0, 1.0, 10.0);
    EXPECT_EQ(PID.getKi(), 1.0);
}

/**
 * @brief Test getKd function
 * 
 */
TEST(pid_test_9, value_test) {
    pid::PIDController PID(1.0, 1.0, 1.0, 10.0);
    EXPECT_EQ(PID.getKd(), 1.0);
}



