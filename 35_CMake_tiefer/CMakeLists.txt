cmake_minimum_required(VERSION 3.14)
project(cmake_tiefer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cmake_tiefer
  cmake_tiefer.cpp
)
