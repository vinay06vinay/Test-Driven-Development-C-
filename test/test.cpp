#include <gtest/gtest.h>
#include "../pid/pid_control.hpp"


/**
 * @brief Construct a new TEST object, This test fails and need to be modified
 * 
 */
TEST(test1, implement_the_method_and_change_return_to_pass_this_test) {
  PID::PIDCONTROLLER pid_control(0.98,0.09,0.001);
  double val1 = pid_control.compute(10.0, 1.0);
  ASSERT_NE(val1, 0.0);
}
/**
 * @brief Construct a new TEST object, This test fails and need to be modified to make test pass
 * 
 */
TEST(test2, implement_the_method_and_change_val2_to_get_a_near_value) {
  PID::PIDCONTROLLER pid_control(0.98,0.09,0.001);
  double val1 = pid_control.compute(10.0, 1.0);
  EXPECT_NEAR(val1, 10.4, 0.5);
}