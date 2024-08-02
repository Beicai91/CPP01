#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl    harl;
    std::string input;

    std::cout << "Welcome to HarlFilter System.\n" << std::endl;
    if (argc != 2)
    {
        std::cout << "Invalid input" << std::endl;
        return (1);
    }
    harl.complain(argv[1]);
    return (0);
}