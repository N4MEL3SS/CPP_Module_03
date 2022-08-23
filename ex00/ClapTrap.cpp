#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "CLAPTRAP!!!";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << this->_name << " beatbox time, check it!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << this->_name << " beatbox time, check it!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Wubwubwub. Dubstep dubstep. Wubwubwubwub DROP! Dubstep!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{

	}
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints < 1)
	{
		std::cout << _name << " You don't have enough energy" << std::endl;
	}
	else
	{
		_energyPoints--;
		_hitPoints += amount;

		std::cout << _name << " - Health replenished by " << amount << " points" << std::endl;
		std::cout << _name << " - Health " << _hitPoints << std::endl;
	}
}

