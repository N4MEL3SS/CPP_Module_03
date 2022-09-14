#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "CLAPTRAP!!!";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << _name << " beatbox time, check it!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << _name << " beatbox time, check it!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Wubwubwub. Dubstep dubstep. Wubwubwubwub DROP! Dubstep!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
		_energyPoints--;
		std::cout << _name << " attacks " << target << std::endl;

		if (target == "Gazebo")
			std::cout << target << " ignored you." << std::endl;
		else
			std::cout << target << " get " << _attackDamage << " points of damage!" << std::endl;
		std::cout << _name << " energy: " << _energyPoints << std::endl;
	}
	else
	{
		std::cout << _name << ": Not enough energy!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount)
	{
		_hitPoints = 0;
		std::cout << _name << " was destroyed!" << std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << _name << " has taken " << amount << " point damage." << std::endl;
		std::cout << _name << " hit points: " << _hitPoints << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints < 1)
		return;

	if (_energyPoints > 0)
	{
		_energyPoints--;
		_hitPoints += amount;

		std::cout << _name << " - Health replenished by " << amount << " points." << std::endl;
		std::cout << _name << " - Health: " << _hitPoints << std::endl;
		std::cout << _name << " energy: " << _energyPoints << std::endl;
	}
	else
	{
		std::cout << _name << ": Not enough energy!" << std::endl;
	}
}

