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
        Zombie(std::string name);
        ~Zombie();
        void    annonce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);
#endif
