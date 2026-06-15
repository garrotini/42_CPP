#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap Bob("Bob");

	Bob.attack("_no_one_");
	Bob.attack("someone");

	Bob.beRepaired(2);

	// calling copy constructor
	ClapTrap clone(Bob);

	// calling copy constructor again
	ClapTrap clonix = Bob;

	// now calling default constructor
	ClapTrap robot;
	// now calling copy assignment operator
	robot = Bob;

	Bob.attack("_no_one_");
	Bob.attack("someone");
	Bob.attack("_no_one_");
	Bob.attack("someone");
	Bob.attack("_no_one_");
	Bob.attack("someone");
	Bob.attack("_no_one_");
	Bob.attack("someone");
	Bob.attack("_no_one_");
	Bob.attack("someone");

	// should have 0 points at this point!
	Bob.attack("someone");
	Bob.beRepaired(2);

	Bob.takeDamage(9);

	// clone won't die because it was created with original Bob + Bob.beRepaired(2)
	clone.takeDamage(11);
	clonix.takeDamage(200);
	robot.takeDamage(123);

	return 0;
}
