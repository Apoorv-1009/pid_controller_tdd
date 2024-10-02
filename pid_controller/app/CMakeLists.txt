add_library(pid_controller
    src.cpp
)

target_include_directories(pid_controller PUBLIC
  # list of directories:
  .
  )