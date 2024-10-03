# PID Test Driven Development
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE) 


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