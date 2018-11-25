cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++17")

set(DIST_DIR "${CMAKE_CURRENT_SOURCE_DIR}/dist")
set(FLTK "${DIST_DIR}/FLTK")

if(NOT IS_DIRECTORY ${FLTK}) 
  message("Starting add FLTK library...")
  execute_process(COMMAND git clone https://github.com/fltk/fltk.git ${CMAKE_CURRENT_SOURCE_DIR}/dist/FLTK)
  execute_process(COMMAND make -C ${CMAKE_CURRENT_SOURCE_DIR}/dist/FLTK)
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/dist/FLTK)

add_executable(keyplay ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

find_library(LibFltk libfltk.a PATHS ${CMAKE_CURRENT_SOURCE_DIR}/dist/FLTK/lib/)

if(APPLE)
  find_library(COCOA Cocoa)
endif()

target_link_libraries(keyplay ${LibFltk} ${COCOA})










