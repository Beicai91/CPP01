#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = NULL;
}

HumanB::~HumanB()
{}

void    HumanB::setWeapon(Weapon &weapon) //& means weapon is a reference
{
    this->_weapon = &weapon; //& means the address of the reference weapon
    return ;
}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    return ;
}