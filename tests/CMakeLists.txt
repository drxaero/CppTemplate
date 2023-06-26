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

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} division)
target_link_libraries(${PROJECT_NAME} GTest::GTest)
target_link_libraries(${PROJECT_NAME} GTest::Main pthread)  # on mods-kdragan, libgtest.so depends on pthread
install(TARGETS ${PROJECT_NAME} DESTINATION bin)

gtest_discover_tests(${PROJECT_NAME})
