#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *zombiePtr = new Zombie[N];
    for (int i = 0; i < N; ++i)
        zombiePtr[i].nameZombie(name);
    return (zombiePtr);
}