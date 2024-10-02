#include <gtest/gtest.h>

#include "pid_lib.hpp"

/**
 * @brief Test control input when already at setpoint
 */
TEST(pid_testt_1, value_test) {
    pid::PIDController pid(1, 1, 1, 10);
    EXPECT_EQ(pid.compute(10), 0);
}

/**
 * @brief Test control input when at 0 velocity
 */
TEST(pid_testt_2, value_test) {
    pid::PIDController pid(1, 1, 1, 10);
    // 1*(10-0) + 1*(0+10*0.1) + 10/0.1*1 = 111
    EXPECT_EQ(pid.compute(0), 111);
}


