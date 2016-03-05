cmake_minimum_required (VERSION 2.8)
project (PascalsTriangle)

set(SOURCES src/main.cpp src/terminalinputoutput.cpp)
add_executable(PascalsTriangle ${SOURCES})

set_property(TARGET PascalsTriangle PROPERTY CXX_STANDARD 11)
set_property(TARGET PascalsTriangle PROPERTY CXX_STANDARD_REQUIRED ON)
