#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombies = zombieHorde(6, "NPC");
    for (int i = 0; i < 6; ++i)
        zombies[i].annonce();
    delete[] zombies;
    zombies = NULL;
    return (0);
}