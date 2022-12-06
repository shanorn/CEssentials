cmake_minimum_required(VERSION 3.0.0)
project(Cmake VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Cmake ./Exercises/T5-Ex09/main.c ./Exercises/T5-Ex09/complejos.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
