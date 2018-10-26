cmake_minimum_required(VERSION 2.8)
project(adder32)

## Check for Windows ##
if (WIN32) # true if windows (32 and 64 bit)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif ()

include_directories(src)
add_subdirectory(src)


add_executable(adder32Executable adder32.cpp)
target_link_libraries(adder32Executable adder32Library)

