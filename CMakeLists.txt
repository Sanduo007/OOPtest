cmake_minimum_required(VERSION 2.8.3)
project(animal)

set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS "-std=c++11 -march=native ")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -fPIC")

set(INCLUDE_PATH ${PROJECT_SOURCE_DIR}/src)
INCLUDE_DIRECTORIES(${INCLUDE_PATH})

ADD_EXECUTABLE( animal ../src/main.cpp ../src/Animal.cpp)