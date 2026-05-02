
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {};
	
void HumanB::setWeapon(Weapon &type)
{
    this->type = &type;
};

void HumanB::attack()
{
    std::cout << this->name << ATTACKS << this->type->getType() << std::endl;
};
