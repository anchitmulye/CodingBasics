cmake_minimum_required(VERSION 3.16.3)

project(DataStructure)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/DataStructure/Main.cpp)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")