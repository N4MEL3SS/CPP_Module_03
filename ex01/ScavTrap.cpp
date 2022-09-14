#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "SC4V-TP";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << this->_name << " say: It's rock\'n\'roll baby" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << this->_name << " say: It's rock\'n\'roll baby" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " say: I will be back!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << this->_name << " bites " << target << std::endl;
		std::cout << target << " gets rabies " << std::endl;
		std::cout << target << " gets " << this->_attackDamage << " points of damage!" << std::endl;
		std::cout << this->_name << " - Energy: " << this->_energyPoints << std::endl;
	}
	else
	{
		std::cout << this->_name << ": Not enough energy!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << " entered in Gate keeper mode." << std::endl;
	std::cout << this->_name << " say: You shall not pass!" << std::endl;
}
