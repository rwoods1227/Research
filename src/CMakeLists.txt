cmake_minimum_required(VERSION 2.8)

project(adder32Library)

## Check for Windows ##
if (WIN32) # true if windows (32 and 64 bit)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif ()

add_library(adder32Library analyzeTextFile.h analyzeTextFile.cpp)

set_target_properties(adder32Library PROPERTIES LINKER_LANGUAGE CXX)
