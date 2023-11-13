cmake_minimum_required(VERSION 3.5)

project(Production LANGUAGES C)

# Add the unity library
add_executable(${PROJECT_NAME} main.c calc.h calc.c)



