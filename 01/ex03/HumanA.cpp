

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &type) : name(name), type(type) {};

void HumanA::attack()
{
    std::cout << this->name << ATTACKS << this->type.getType() << std::endl;
};
