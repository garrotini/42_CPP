#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	
	public:
		using FragTrap::hit;
		using FragTrap::damage;
		using ScavTrap::energy;
		DiamondTrap();
		// DiamondTrap(std::string name);
		// DiamondTrap(const DiamondTrap &src);
		// DiamondTrap &operator=(const DiamondTrap &src);
		// ~DiamondTrap();

		// void whoAmI();

		using ScavTrap::attack;
};

#endif 
