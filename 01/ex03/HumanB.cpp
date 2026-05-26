
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : name(name), type(NULL) {};
	
void HumanB::setWeapon(Weapon &type)
{
    this->type = &type;
};

void HumanB::attack()
{
	if (this->type)
		std::cout << this->name << ATTACKS << this->type->getType() << std::endl;
};
