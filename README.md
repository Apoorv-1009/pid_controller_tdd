# PID Test Driven Development
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE) 

[![Run Unit Test and Upload Coverage Report](https://github.com/Apoorv-1009/pid_controller_tdd/actions/workflows/codecov.yml/badge.svg)](https://github.com/Apoorv-1009/pid_controller_tdd/actions/workflows/codecov.yml)

[![codecov](https://codecov.io/gh/Apoorv-1009/pid_controller_tdd/graph/badge.svg?token=4JBJWIUV8D)](https://codecov.io/gh/Apoorv-1009/pid_controller_tdd)

</br>
ENPM700: Software Development for Robotics, PID controller exercise for test driven pair programming development.

Driver: Apoorv Thapliyal </br>
Navigator: Amogha Thalihalla Sunil 

## Build Setup
Ensure you are in the correct working directory
```
# Create the make files using cmake
cmake -S ./ -B build/

# Building with cmake
cmake --build build/
```

## Generate Docs
```
# Build the docs
cmake --build ./build --target docs

# Open the docs
open ./docs/html/index.html
```

## Test
```
# Run the unit tests
ctest --test-dir build/
```