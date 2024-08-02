#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    this->annonce();
}

Zombie::~Zombie()
{
    std::cout << this->_name << ": destroyed" << std::endl;
}

void    Zombie::annonce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}