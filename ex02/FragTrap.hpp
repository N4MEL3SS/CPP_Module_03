#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string& name);

	~FragTrap();

	void highFivesGuys();
};

#endif //FRAGTRAP_HPP
