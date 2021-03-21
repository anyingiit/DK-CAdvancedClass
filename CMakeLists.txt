cmake_minimum_required(VERSION 3.17)
project(DK_CAdvancedClass)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(src)
add_executable(Q1_doubleDimensionalArray src/2021-3-11/Q1_doubleDimensionalArray.cpp)
add_executable(Q2_functionAbout src/2021-3-11/Q2_functionAbout.cpp)
add_executable(Q3_pointerAbout src/2021-3-11/Q3_pointerAbout.cpp)
add_executable(Q2 src/2021-3-18/Q2.cpp)
add_executable(Q3 src/2021-3-15/Q3.cpp)

add_executable(Q1 src/2021-3-18/Q1.cpp)

add_executable(Q3Test src/2021-3-15/Q3Test.cpp)
add_executable(Q4 src/2021-3-15/Q4.cpp)
add_executable(Q5 src/2021-3-15/Q5.cpp)
