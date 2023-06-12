cmake_minimum_required(VERSION 3.2)
project(base C)

set(SOURCE_FILES
    include/base.h
    src/milk.c
    src/water.c
)

add_library(base SHARED STATIC ${SOURCE_FILES})

install(TARGETS base DESTINATION ${MY_PROJ_INSTALL_LIB_DIR})
install(FILES include/base.h DESTINATION ${MY_PROJ_INSTALL_LIB_DIR})
