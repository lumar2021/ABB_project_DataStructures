cmake_minimum_required(VERSION 3.23)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp Node.h BigTree.h BigTree.cpp File.cpp File.h NodeNumber.h NumberTree.cpp NumberTree.h)
