cmake_minimum_required(VERSION 3.11)

# Project setup
project(cmk VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(src/app)
add_subdirectory(src/data_producer_lib)
