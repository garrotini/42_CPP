#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	
	public:
		using FragTrap::_hit;
		using FragTrap::_damage;
		using ScavTrap::_energy;
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap &operator=(const DiamondTrap &src);
		~DiamondTrap();

		using ScavTrap::attack;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName() ;
		int getHit() ;
		int getEnergy() ;
		int getDamage() ;

		void whoAmI();
};

#endif 
