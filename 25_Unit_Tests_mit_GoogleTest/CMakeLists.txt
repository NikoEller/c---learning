cmake_minimum_required(VERSION 3.14)
project(unit_tests_mit_googletest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)

# Based on the official GoogleTest CMake quickstart.
# Google recommends updating the referenced commit hash regularly.
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_library(calculator_lib
  src/calculator.cpp
)

target_include_directories(calculator_lib
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(unit_tests_mit_googletest
  unit_tests_mit_googletest.cpp
)

target_link_libraries(unit_tests_mit_googletest
  PRIVATE
    calculator_lib
)

add_executable(calculator_tests
  tests/calculator_test.cpp
)

target_link_libraries(calculator_tests
  PRIVATE
    calculator_lib
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(calculator_tests)
