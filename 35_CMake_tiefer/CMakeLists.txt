cmake_minimum_required(VERSION 3.14)
project(cmake_tiefer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(message_lib
  src/message.cpp
)

target_include_directories(message_lib
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(cmake_tiefer
  cmake_tiefer.cpp
)

target_link_libraries(cmake_tiefer
  PRIVATE
    message_lib
)
