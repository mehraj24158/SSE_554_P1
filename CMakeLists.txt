cmake_minimum_required(VERSION 3.19.2)

set(self player)

project(self)

enable_testing()

add_subdirectory(googletest)

set(headers
    player.hpp
)

set(src
    player.cpp
)

add_library(${self} STATIC ${src} ${headers})

add_subdirectory(test)