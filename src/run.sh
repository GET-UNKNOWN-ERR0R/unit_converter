#!/bin/bash

# Check for C++ compiler is installed or not? 
if ! command -v g++ &>/dev/null; then
    echo "C++ compiler (g++) is not installed. Please install it and try again."
    exit 1
fi

# Compiling
g++ -o unit_converter src/main.cpp

if [ $? -eq 0 ]; then
    echo "Compilation successful. Running the program..."
    ./unit_converter
else
    echo "Compilation failed. Please check for errors."
    exit 1
fi
