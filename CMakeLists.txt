cmake_minimum_required(VERSION 3.28)
project(C_Code C)

set(CMAKE_C_STANDARD 11)

# Create two separate programs
add_executable(babble babble.c)
add_executable(binary_search binary_search.c)
