#include <iostream>
#include "FragTrap.hpp"

int main()
{
	FragTrap Frag;
	FragTrap Gazebo("Gazebo");

	std::cout << "________________________________" << std::endl;
	std::cout << std::endl;

	Gazebo.attack("FR4G-TP");
	std::cout << std::endl;

	Frag.takeDamage(30);
	std::cout << std::endl;

	Frag.beRepaired(10);
	std::cout << std::endl;

	Gazebo.beRepaired(10);
	std::cout << std::endl;

	Gazebo.highFivesGuys();

	std::cout << std::endl;
	std::cout << "________________________________" << std::endl;
	return 0;
}
