set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

cmake_minimum_required(VERSION 3.6...3.25)

if (${CMAKE_VERSION} VERSION_LESS 3.12)
  cmake_policy(VERSION ${CMAKE_MAJOR_VERSION} ${CMAKE_MINOR_VERSION})
endif()

set(HEADERS
  ./include/clox/common.h)

set(SOURCES
  ${HEADERS})

project(clox
  VERSION 0.1
  DESCRIPTION "Clox interpreter")

add_executable(clox main.c ${SOURCES})

target_include_directories(clox PRIVATE ./include/clox/)

