cmake_minimum_required(VERSION 3.5)

project(CPPMensuration)
add_executable(main src/main.cpp src/display/display.cpp  src/utils/utils.cpp src/shapes/rectangle/rectangle.cpp src/shapes/triangle/triangle.cpp src/shapes/parallelogram/parallelogram.cpp src/shapes/trapezium/trapezium.cpp)
set(CMAKE_CXX_STANDARD 11)