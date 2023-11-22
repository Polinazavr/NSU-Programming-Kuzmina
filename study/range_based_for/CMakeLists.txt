cmake_minimum_required (VERSION 3.5.0)

set(CMAKE_OSX_ARCHITECTURES "arm64" CACHE INTERNAL "" FORCE)

# Project name
project (study)

set(SOURCES main.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 17)
