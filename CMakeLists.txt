cmake_minimum_required(VERSION 3.21)
project(Module_3)

set(CMAKE_CXX_STANDARD 98)
add_compile_options(-Wall -Wextra -Werror)

add_executable(Module_3_ex00 ex00/main.cpp ex00/ClapTrap.cpp ex00/ClapTrap.hpp)
add_executable(Module_3_ex01 ex01/main.cpp)
add_executable(Module_3_ex02 ex02/main.cpp)
