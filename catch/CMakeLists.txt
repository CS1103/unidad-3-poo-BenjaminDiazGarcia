cmake_minimum_required(VERSION 3.10.3)
project(demo_catch)

set(CMAKE_CXX_STANDARD 14)

add_executable(demo_catch main.cpp Particula.cpp Particula.h Simulador.cpp Simulador.h Simulador.h Particula-test.cpp Simulador-test.cpp catch.hpp)