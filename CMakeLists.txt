cmake_minimum_required(VERSION 3.29)
project(RaytracingOnAWeekend)

set(CMAKE_CXX_STANDARD 17)

add_executable(RaytracingOnAWeekend main.cpp
        vec3.h
        color.h
        ray.h
)
