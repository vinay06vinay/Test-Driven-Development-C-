/**
 * @file main.cpp
 * @author Vinay Krishna Bukka (vinay06@umd.edu)
 * @brief Intitialze the main function which runs all test cases
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <gtest/gtest.h>

#include "../pid/pid_control.hpp"




int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
