#include "Harl.hpp"

int main(void)
{
    Harl    harl;
    std::string input;

    std::cout << "Welcome to Harl System.\n Enter the following levels to see corresponding information: DEBUG, INFO, WARNING, ERROR." << std::endl;
    std::cout << "Enter EXIT to exit from Harl System." << std::endl;
    while (input.compare("EXIT"))
    {
        std::cout << "Please enter a level or exit: " << std::endl;
        std::cin >> input;
        harl.complain(input);
        //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return (0);
}