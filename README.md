# PID Test Driven Development
ENPM700: Software Development for Robotics, PID controller exercise for test driven pair programming development.

Driver: Apoorv Thapliyal </br>
Navigator: Amogha 

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