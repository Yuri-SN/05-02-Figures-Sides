cmake_minimum_required(VERSION 3.16)

project(05-02-Figures-Sides LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(05-02-Figures-Sides
    main.cpp
    Figure.h
    Figure.cpp
    Triangle.h
    Triangle.cpp
    Quadrangle.h
    Quadrangle.cpp
    Triangle/RightTriangle.h
    Triangle/IsoscelesTriangle.h
    Triangle/EquilateralTriangle.h
    Quadrangle/Rectangle.h
    Quadrangle/Square.h
    Quadrangle/Parallelogram.h
    Quadrangle/Rhombus.h
)

include(GNUInstallDirs)
install(TARGETS 05-02-Figures-Sides
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
