#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string const& name);

	~DiamondTrap();

	void attack(std::string const &target);
	void whoAmI();

private:
	std::string _name;
};

#endif //DIAMONDTRAP_HPP
