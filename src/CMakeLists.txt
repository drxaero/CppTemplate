cmake_minimum_required(VERSION 3.2)
project(my_app)

add_subdirectory(libs)
set(SOURCE_FILES main.cpp)
include_directories("/home/utils/boost-1.80.0/gcc-9.3.0/include/")

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
#target_link_libraries(${PROJECT_NAME} "-static") # use static C runtime library
target_link_libraries(${PROJECT_NAME} arom)
target_link_libraries(${PROJECT_NAME} base)
target_link_libraries(${PROJECT_NAME} division)
install(TARGETS ${PROJECT_NAME} DESTINATION ${DIVISIBLE_INSTALL_BIN_DIR})
