cmake_minimum_required(VERSION 4.0)
project(workshop)

set(CMAKE_CXX_STANDARD 23)

add_executable(workshop src/main.cpp
        src/item/item.cpp
        src/item/item.h)
