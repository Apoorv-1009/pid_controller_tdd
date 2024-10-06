add_library(PIDCONTROLLER
  PIDController.cpp
)

target_include_directories(PIDCONTROLLER PUBLIC
  # list of directories:
  .
  include/
  )