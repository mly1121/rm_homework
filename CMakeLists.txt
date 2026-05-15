cmake_minimum_required(VERSION 3.8)
project(FactorialCalculator)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(transistor
    src/main.cpp
    src/factorial.cpp
)