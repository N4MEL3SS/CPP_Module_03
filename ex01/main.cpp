#include <iostream>
#include "ScavTrap.hpp"

int main()
{
	ClapTrap Clap;
	ScavTrap Scav;
	ScavTrap Gazebo("Gazebo");

	std::cout << "________________________________" << std::endl;
	std::cout << std::endl;

	Clap.attack("Gazebo");
	std::cout << std::endl;

	Gazebo.attack("CL4P-TP");
	Clap.takeDamage(10);
	std::cout << std::endl;

	Clap.beRepaired(10);
	Gazebo.beRepaired(10);
	std::cout << std::endl;

	Gazebo.guardGate();

	std::cout << std::endl;
	std::cout << "________________________________" << std::endl;

	return 0;
}
