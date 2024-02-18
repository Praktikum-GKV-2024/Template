cmake_minimum_required(VERSION 3.10)
project(YourProjectName)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add include directories
include_directories(include)

# Add source files
set(SOURCES
    src/main.cpp
)

# Compile source files
add_executable(main ${SOURCES})

# Link the executable with necessary libraries
target_link_libraries(main
    ${CMAKE_SOURCE_DIR}/lib/libfreeglut_static.a
    glu32
    opengl32
    winmm
    gdi32
)
