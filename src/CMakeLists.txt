cmake_minimum_required(VERSION 3.28)
project(Kurva_Bezier)

set(CMAKE_CXX_STANDARD 14)

add_executable(Kurva_Bezier main.cpp
        Dot.cpp
        Dot.h
        bejir.cpp
        Line.h
        Line.cpp
        bejir.h)
