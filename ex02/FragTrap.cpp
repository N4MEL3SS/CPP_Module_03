#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "FR4G-TP";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Here is " << this->_name << std::endl;
}

FragTrap::FragTrap(const std::string& name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Here is " << this->_name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " a reboot is required!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << this->_name << " - request high fives!" << std::endl;
}
