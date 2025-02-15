
cmake_minimum_required(VERSION 3.10)

# Set the C++ standard to C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Used internally by CMake to identify your project
project(MovieRating)

# Include the directory headers are located
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add the main executable
add_executable(MovieRating src/main.cpp src/movie.cpp src/movie_factory.cpp)

####################################################

# Add the test executable
add_executable(MovieRatingTest src/movie.cpp src/movie_factory.cpp test/test.cpp)

# Include directories for the test target
target_include_directories(MovieRatingTest PRIVATE ${PROJECT_SOURCE_DIR}/include)

# Enable testing
enable_testing()

# Register the test executable with CTest
add_test(NAME MovieRatingTest COMMAND MovieRatingTest)
