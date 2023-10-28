cmake_minimum_required(VERSION 3.10)

project(MyProject)

set(CMAKE_CXX_STANDARD 11)

# Locate and configure any packages if needed

# Include the headers
include_directories(include)

# Collect source files
file(GLOB SOURCES "src/*.cpp")

add_executable(my_program ${SOURCES})
