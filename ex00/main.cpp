#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie = newZombie("John");
    delete zombie;
    zombie = NULL;
    randomChump("Doe");
    return (0);
}