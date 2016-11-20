cmake_minimum_required(VERSION 3.5)
project(test_libft)

include_directories(unit_test_clion_init/lib/gtest-1.7.0/include)

add_subdirectory(libft)
add_subdirectory(unit_test_clion_init)

set(SRCS
    unit_test_clion_init/basic_tests/basic_check.cpp)

add_executable(runBasicTest ${SRCS})

target_link_libraries(runBasicTest ft)
target_link_libraries(runBasicTest gtest gtest_main)