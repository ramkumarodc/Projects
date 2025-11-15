# Minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Project name and language
project(string LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(string string.cpp)
add_executable(func1 func1.cpp)
