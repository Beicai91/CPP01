#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{}

void    Weapon::setType(std::string type)
{
    this->_type = type;
    return ;
}

const std::string&  Weapon::getType()
{
    const std::string   &typeREF = this->_type;
    return (typeREF);
}