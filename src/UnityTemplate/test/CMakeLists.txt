cmake_minimum_required(VERSION 3.5)

project(RunAllTests LANGUAGES C)

include_directories(${CMAKE_SOURCE_DIR}/src)
file(GLOB SRC_COMMON ${CMAKE_SOURCE_DIR}/src/*.c)
list(REMOVE_ITEM SRC_COMMON ${CMAKE_SOURCE_DIR}/src/main.c)

file(GLOB SRC_TEST ${CMAKE_SOURCE_DIR}/test/*.c)
include_directories( ${CMAKE_SOURCE_DIR}/lib/Unity/src/)
add_executable(${PROJECT_NAME} ${SRC_TEST} ${SRC_COMMON} )

target_link_libraries(${PROJECT_NAME} -L${CMAKE_BINARY_DIR}/lib/Unity -lunity)
# Include the Unity header files

# Enable testing
enable_testing()

