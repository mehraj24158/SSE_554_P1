cmake_minimum_required(VERSION 3.19.2)

set(self test_main)

set(src 
    test_main.cpp
)

add_executable(${self} ${src})

target_link_libraries(${self} PUBLIC
    gtest_main
    player
)

add_test(
    NAME ${self}
    COMMAND ${self}
)
