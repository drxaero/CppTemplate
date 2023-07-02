#!/usr/bin/env bash

BIN_DIR="bin"
CMAKE_BUILD_DIR="build"
rm -rf $BIN_DIR $CMAKE_BUILD_DIR
mkdir $CMAKE_BUILD_DIR
cd $CMAKE_BUILD_DIR && cmake ../ && make && make install
