# CMake version
cmake_minimum_required(VERSION 3.6...3.25)

if (${CMAKE_VERSION} VERSION_LESS 3.12)
  cmake_policy(VERSION ${CMAKE_MAJOR_VERSION} ${CMAKE_MINOR_VERSION})
endif()

# Project desc
project(clox VERSION 1.0
  DESCRIPTION "CLox implementation from crafting interpreters."
  LANGUAGES C)
