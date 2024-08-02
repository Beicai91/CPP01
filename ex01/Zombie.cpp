#include "Zombie.hpp"

Zombie::Zombie()
{
}


Zombie::~Zombie()
{
    std::cout << this->_name << ": destroyed" << std::endl;
}

void    Zombie::annonce() const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::nameZombie(std::string name)
{
    this->_name = name;
}