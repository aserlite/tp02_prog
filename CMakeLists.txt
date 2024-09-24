cmake_minimum_required(VERSION 3.21)
project(TD02)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    src/ex1.cpp
    src/ex2.cpp
    src/ex3.cpp
    src/ex4.cpp
    src/ex5.cpp
    src/ex6.cpp
    src/bonus.cpp
)

foreach(SOURCE ${SOURCES})
    get_filename_component(EXECUTABLE_NAME ${SOURCE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SOURCE})
endforeach()