#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap x; 			// uses default constructor: CT, ST
	ScavTrap y("Mr_Scavz"); // uses parameterized constructor: CT, ST
	ScavTrap cloniy(y); 	// uses copy constructor: CT, ST
	ScavTrap clonix;		// uses default constructor: CT, ST
	clonix = x;				// uses copy assignment: CT, ST

	x.attack("another someone");
	x.beRepaired(5);
	x.guardGate();

	y.attack("another someone");
	y.beRepaired(5);
	y.guardGate();
	
	for(int i=0; i < 10; i++)
		x.takeDamage(11);

	cloniy.takeDamage(50);
	clonix.takeDamage(51);

	return 0;
}
