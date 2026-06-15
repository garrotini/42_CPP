#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << std::endl << "__CLAPTRAP__" << std::endl << std::endl;
	
	ClapTrap a;

	std::cout << "-> CT name: " << a.getName();
	std::cout << "; energy: " << a.getEnergy();
	std::cout << "; hit: " << a.getHit();
	std::cout << "; damage: " << a.getDamage() << std::endl << std::endl;

	a.attack("the atmosphere");
	a.beRepaired(1);
	a.takeDamage(37);

	std::cout << std::endl << "__SCAVTRAP__" << std::endl << std::endl;

	ScavTrap i("Mr. Scavz");
	std::cout << "-> ST name: " << i.getName();
	std::cout << "; energy: " << i.getEnergy();
	std::cout << "; hit: " << i.getHit();
	std::cout << "; damage: " << i.getDamage() << std::endl << std::endl;

	i.attack("the atmosphere");
	i.guardGate();
	i.takeDamage(11);


	std::cout << std::endl << "__FRAGTRAP__" << std::endl << std::endl;
	FragTrap x;				// default constructor: CT, FT
	FragTrap y("Yann");		// parameterized constructor: CT, FT
	FragTrap cloniy(y);		// copy constructor: CT, FT
	FragTrap clonix;		// default constructor: CT, FT
	clonix = x;				// copy assignment: FT
	
	std::cout << std::endl << "-> FT name: " << x.getName();
	std::cout << "; energy: " << x.getEnergy();
	std::cout << "; hit: " << x.getHit();
	std::cout << "; damage: " << x.getDamage() << std::endl;

	std::cout << std::endl << "-> FT name: " << y.getName();
	std::cout << "; energy: " << y.getEnergy();
	std::cout << "; hit: " << y.getHit();
	std::cout << "; damage: " << y.getDamage() << std::endl << std::endl;

	x.attack("nobody");
	y.highFiveGuys();
	cloniy.takeDamage(123);
	clonix.guardGate();
	x.beRepaired(42);
	
	std::cout << std::endl << "_c_l_e_a_n_i_n_g_" << std::endl << std::endl;

	return 0;
}
