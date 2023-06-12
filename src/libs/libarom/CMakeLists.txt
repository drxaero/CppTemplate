cmake_minimum_required(VERSION 3.2)
project(arom C)

set(SOURCE_FILES
    include/arom.h
    src/cherry.c
    src/coco.c
)

add_library(arom SHARED STATIC ${SOURCE_FILES})

install(TARGETS arom DESTINATION ${MY_PROJ_INSTALL_LIB_DIR})
install(FILES include/arom.h DESTINATION ${MY_PROJ_INSTALL_LIB_DIR})
