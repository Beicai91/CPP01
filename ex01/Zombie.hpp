#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Zombie
{
    private:
        std::string _name;
    
    public:
        Zombie();
        ~Zombie();
        void    nameZombie(std::string name);
        void    annonce(void) const;
};

Zombie  *zombieHorde(int N, std::string name);
#endif
