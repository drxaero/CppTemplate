cmake_minimum_required(VERSION 3.2)
project(my_app)

add_subdirectory(libs)
set(SOURCE_FILES main.cpp)
include_directories("/home/utils/boost-1.80.0/gcc-9.3.0/include/")

add_executable(my_app ${SOURCE_FILES})
target_link_libraries(my_app m)
target_link_libraries(my_app arom)
target_link_libraries(my_app base)
target_link_libraries(my_app division)
install(TARGETS my_app DESTINATION ${DIVISIBLE_INSTALL_BIN_DIR})
