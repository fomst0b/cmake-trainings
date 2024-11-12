#!/bin/bash

# Clear terminal
clear

# Check for 'clean' argument
if [ "$1" == "--clean" ]; then
    echo "Performing clean build..."
    rm -rf output
fi

# Create and navigate to the build directory
mkdir -p output
cd output

# Configure the project with CMake using GCC 13
cmake -DCMAKE_C_COMPILER=gcc-13 -DCMAKE_CXX_COMPILER=g++-13 ..

# Build the project
cmake --build .
