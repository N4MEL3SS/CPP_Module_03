#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(const std::string& name);

	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();

protected:
	unsigned int _energyScavTrap;

	ScavTrap();

};

#endif //SCAVTRAP_HPP
