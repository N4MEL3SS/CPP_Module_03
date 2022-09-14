#include <iostream>
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap Gazebo("Gazebo");

	std::cout << "________________________________" << std::endl;
	std::cout << std::endl;

	Gazebo.whoAmI();
	std::cout << std::endl;

	Gazebo.attack("You");

	std::cout << std::endl;
	std::cout << "________________________________" << std::endl;
	return 0;
}
