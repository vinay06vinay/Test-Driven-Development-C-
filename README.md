# Test Drive Development Programming

# CI/CD Test Coverage Badge:
![CICD Workflow status](https://codecov.io/gh/vinay06vinay/Test-Driven-Development-ENPM808X/actions/workflows/run-unit-test-and-upload-codecov.yml/badge.svg)

# C++ Test Code coverage badges
[![codecov](https://codecov.io/gh/vinay06vinay/Test-Driven-Development-ENPM808X/branch/main/graph/badge.svg)](https://codecov.io/gh/vinay06vinay/Test-Driven-Development-ENPM808X) 
## Authors - TDD - Team 3 - Part 1
Driver - Vinay Krishna Bukka (vinay06@umd.edu)

Navigator - Suryavardhan Chappidi (chappidi@umd.edu)
## Overview

A PID Controller Implementation to implement pid function that calculates the velocity based on error.

## Standard install via command-line
```bash
# Download the code:
  git clone https://github.com/vinay06vinay/Test-Driven-Development-ENPM808X.git
  cd Test-Driven-Development-ENPM808X
# Create make files
  cmake -S ./ -B build/
  # Compile and build the code
  cmake --build build/
  # Run program:
  ./build/app/shell-app

  # Run tests:
  cd build/; ctest; cd 


```
## Steps to Run Coverage Tests and view results:
```bash
# Set the build type to Debug and WANT_COVERAGE=ON
  cmake -D WANT_COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug -S ./ -B build/
# Now, do a clean compile, run unit test, and generate the covereage report
  cmake --build build/ --clean-first --target all test_coverage
# open a web browser to browse the test coverage report
  open build/test_coverage/index.html
```
## For App Coverage:

```bash
# Now, do another clean compile, run shell-app and -pid, and generate its covereage report
  cmake --build build/ --clean-first --target all app_coverage
# open a web browser to browse the test coverage report
  open build/app_coverage/index.html

```

## Access The UML from below file in the directory "pid_uml.pdf"
