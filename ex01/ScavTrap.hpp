#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string& name);

	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};

#endif //SCAVTRAP_HPP
