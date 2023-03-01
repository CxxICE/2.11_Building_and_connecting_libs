cmake_minimum_required(VERSION 3.22.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(PROJ "Class hierarchy")
set(SRC "Class hierarchy.cpp")
set(OUT "Class hierarchy")

project (${PROJ})

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library (LIB_DLL SHARED
Figure.cpp
Parallelogram.cpp
Quadrilateral.cpp
Rectangle.cpp
Rombus.cpp
Square.cpp
Triangle.cpp
TriangleEquilateral.cpp
TriangleIsosceles.cpp
TriangleRight.cpp)

add_executable(Class_hierarchy ${SRC})
set_property(
TARGET Class_hierarchy
PROPERTY OUTPUT_NAME ${OUT})

target_link_libraries (Class_hierarchy LIB_DLL)