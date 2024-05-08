cmake_minimum_required(VERSION 3.5.0)
project(lab7 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(lab7 main.cpp)
add_library(n STATIC rhombus.cpp)
add_library(r STATIC new_rhombus.cpp)

target_link_libraries(lab7 n)
target_link_libraries(lab7 r)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
