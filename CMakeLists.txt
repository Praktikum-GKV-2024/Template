CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
PROJECT(YourProjectName)

# Set C++ standard
SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

# Add include directories
INCLUDE_DIRECTORIES(include)

# to easily compile multiple singular executable
MACRO(COMPILE name)
    ADD_EXECUTABLE(${name} ${ARGN})
    IF(WIN32) 
        TARGET_LINK_LIBRARIES(${name}
            ${CMAKE_SOURCE_DIR}/lib/libfreeglut_static.a
            glu32
            opengl32
            winmm
            gdi32
        )
    ELSE()
        TARGET_LINK_LIBRARIES(${name}
            ${CMAKE_SOURCE_DIR}/lib/libglut.so
            X11
            Xxf86vm
            Xrandr
            GL
            m
        )
    ENDIF()
ENDMACRO()


# Add source files (for complex more than one file)
SET(SOURCES # < remember this
    src/main.cpp
    # add more file here
    # e.g.
    # src/asd.cpp
    # src/camera.cpp
)

# Compile source files
#          substitute here
#             VVVVVVVVV
COMPILE(main ${SOURCES})

# multiple singular project
#     name of exe   the source file
#       VVVVV    VVVVVVVVVVVVVVV
COMPILE(point    src/1_point.cpp)
COMPILE(garis    src/2_garis.cpp)
COMPILE(segitiga src/3_segitiga.cpp)
COMPILE(persegi  src/4_persegi.cpp)


