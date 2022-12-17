cmake_minimum_required(VERSION 3.0.0)
project(clase02 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(clase02 ejercicio08.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
