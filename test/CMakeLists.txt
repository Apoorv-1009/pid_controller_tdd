add_executable(PID_TEST
  # list of source cpp files:
  main.cpp
  test.cpp
  )

# Any dependent libraires needed to build this target.
target_link_libraries(PID_TEST PUBLIC
  # list of libraries:
    gtest
    PIDCONTROLLER
)

target_include_directories(PID_TEST PUBLIC
  # list inclue directories:
  ${CMAKE_SOURCE_DIR}/src/include
)

gtest_discover_tests(PID_TEST)

