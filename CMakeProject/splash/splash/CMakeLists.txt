# CMakeList.txt: splash CMake Project
cmake_minimum_required (VERSION 3.8)
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)


file (GLOB_RECURSE ALL_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/splash/source/*.cpp")
set (ALL_SRCS ${ALL_SOURCES})

add_executable (splash ${ALL_SRCS}  ${CMAKE_CURRENT_SOURCE_DIR}/splash.cpp )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/splash/include
${CMAKE_CURRENT_SOURCE_DIR}/IncludeBitmapImage.hpp)
