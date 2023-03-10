set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

cmake_minimum_required(VERSION 3.6...3.25)

if (${CMAKE_VERSION} VERSION_LESS 3.12)
  cmake_policy(VERSION ${CMAKE_MAJOR_VERSION} ${CMAKE_MINOR_VERSION})
endif()

set(HEADERS
  ./include/clox/common.h
  ./include/clox/chunk.h
  ./include/clox/memory.h
  ./include/clox/debug.h
  ./include/clox/value.h
  ./include/clox/vm.h
  ./include/clox/compiler.h
  ./include/clox/scanner.h
)

set(SOURCES
  ./src/chunk.c
  ./src/memory.c
  ./src/debug.c
  ./src/value.c
  ./src/vm.c
  ./src/compiler.c
  ./src/scanner.c
  ${HEADERS})

project(clox
  VERSION 0.1
  DESCRIPTION "Clox interpreter")

add_executable(clox main.c ${SOURCES})

target_include_directories(clox PRIVATE ./include/clox/)

