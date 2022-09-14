cmake_minimum_required(VERSION 3.21)
project(Module_3)

set(CMAKE_CXX_STANDARD 98)
add_compile_options(-Wall -Wextra -Werror)

add_executable(Module_3_ex00 ex00/main.cpp ex00/ClapTrap.cpp ex00/ClapTrap.hpp)
add_executable(Module_3_ex01 ex01/main.cpp ex01/ScavTrap.cpp ex01/ScavTrap.hpp ex01/ClapTrap.cpp ex01/ClapTrap.hpp)
add_executable(Module_3_ex02 ex02/main.cpp ex02/FragTrap.cpp ex02/FragTrap.hpp ex02/ClapTrap.cpp ex02/ClapTrap.hpp)
add_executable(Module_3_ex03 ex03/main.cpp ex03/FragTrap.cpp ex03/FragTrap.hpp ex03/ScavTrap.cpp ex03/ScavTrap.hpp ex03/ClapTrap.cpp ex03/ClapTrap.hpp ex03/DiamondTrap.cpp ex03/DiamondTrap.hpp)
