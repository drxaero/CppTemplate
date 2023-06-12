cmake_minimum_required(VERSION 3.2)
project(my_proj_tests)

set(GTEST_DIR /home/utils/googletest-1.11.0/gcc-6.4.0-2)
set (GTEST_INCLUDE_DIR ${GTEST_DIR}/include)
set (GTEST_LIBRARY ${GTEST_DIR}/lib/libgtest.so)
set (GTEST_MAIN_LIBRARY ${GTEST_DIR}/lib/libgtest_main.so)
enable_testing()
find_package(GTest REQUIRED)
include(CTest)
include(GoogleTest)

include_directories(${MY_DIVISION_HEADERS_DIR})
include_directories(${GTEST_INCLUDE_DIR})

set(SOURCE_FILES src/divider_tests.cpp)

add_executable(my_proj_tests ${SOURCE_FILES})
target_link_libraries(my_proj_tests division)
target_link_libraries(my_proj_tests GTest::GTest)
target_link_libraries(my_proj_tests GTest::Main pthread)  # on mods-kdragan, libgtest.so depends on pthread
install(TARGETS my_proj_tests DESTINATION bin)

gtest_discover_tests(my_proj_tests)
