#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "DI4M-TP";
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << this->_name << ". He is alive!!!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
{
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyScavTrap;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << this->_name << ". He is alive!!!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name << ". He is not alive." << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Clap name: " << this->ClapTrap::_name << std::endl;
	std::cout << "Hit points: " << this->_hitPoints << std::endl;
	std::cout << "Energy points: " << this->_energyPoints << std::endl;
	std::cout << "Attack damage: " << this->_attackDamage << std::endl;
}
