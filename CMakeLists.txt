cmake_minimum_required(VERSION 3.2)

set(CMAKE_C_COMPILER /home/utils/gcc-11.2.0/bin/gcc)
set(CMAKE_CXX_COMPILER /home/utils/gcc-11.2.0/bin/g++)

project(MyProj)

include(Dart)   # generates DartConfiguration.tcl which is required by CTest explorer to detect CTests

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -O3")

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(MY_PROJ_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(MY_PROJ_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(MY_PROJ_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/libs)

set(MY_LIBAROM_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src/libs/libarom/include)
set(MY_LIBBASE_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src/libs/libbase/include)
set(MY_DIVISION_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src/libs/division)

include_directories(${MY_PROJ_INSTALL_INCLUDE_DIR})
include_directories(${MY_LIBAROM_HEADERS_DIR})
include_directories(${MY_LIBBASE_HEADERS_DIR})
include_directories(${MY_DIVISION_HEADERS_DIR})

add_subdirectory(src)
add_subdirectory(tests)


