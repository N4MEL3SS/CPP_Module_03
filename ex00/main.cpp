#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap Trap;
	ClapTrap Gazebo("Gazebo");

	std::cout << "________________________________" << std::endl;
	std::cout << std::endl;

	for(int i = 0; i < 12; i++)
		Trap.attack("Gazebo");
	std::cout << std::endl;

	Gazebo.attack("CLAPTRAP!!!");
	Trap.takeDamage(10);
	std::cout << std::endl;

	Trap.beRepaired(10);
	Gazebo.beRepaired(10);

	std::cout << std::endl;
	std::cout << "________________________________" << std::endl;

	return 0;
}
