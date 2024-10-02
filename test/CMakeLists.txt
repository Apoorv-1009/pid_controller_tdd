add_executable(pid_test
  # list of source cpp files:
  main.cpp
  test.cpp
  )

# Any dependent libraires needed to build this target.
target_link_libraries(pid_test PUBLIC
  # list of libraries:
    gtest
    pid_controller
)

gtest_discover_tests(pid_test)

