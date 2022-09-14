#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(const std::string& name);

	~FragTrap();

	void highFivesGuys();

protected:
	FragTrap();
};

#endif //FRAGTRAP_HPP
