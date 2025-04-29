cmake_minimum_required(VERSION 3.10)
# Set the C++ standard to C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# used internally by CMake to identify your project
project(A8)
# Include the directory headers are located
include_directories(${CMAKE_SOURCE_DIR}/include)
# Add the main executable
add_executable(A8 src/main.cpp src/car.cpp src/carbuilder.cpp src/clientcode.cpp src/director.cpp src/manual.cpp src/manualbuilder.cpp)
####################################################
# Add the test executable
add_executable(my_test test/test.cpp src/car.cpp src/carbuilder.cpp src/clientcode.cpp src/director.cpp src/manual.cpp src/manualbuilder.cpp)
# Include directories for the test target
target_include_directories(my_test PRIVATE ${PROJECT_SOURCE_DIR}/include)
# Enable testing
enable_testing()
# Register the test executable with CTest (optional)
add_test(NAME my_test COMMAND my_test)