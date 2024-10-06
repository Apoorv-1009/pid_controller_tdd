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


