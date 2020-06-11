cmake_minimum_required(VERSION 3.15.3)
project(terminal_calculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(terminal_calculator_cpp main.cpp Calc.cpp Calc.h)