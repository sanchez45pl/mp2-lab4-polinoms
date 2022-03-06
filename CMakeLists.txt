cmake_minimum_required(VERSION 3.21)
project(mp2-lab4-polinoms)

set(CMAKE_CXX_STANDARD 23)

include_directories(.)
include_directories(include)



add_executable(mp2-lab4-polinoms samples/main.cpp include/polinom.h include/monom.h)
add_subdirectory(google_tests)