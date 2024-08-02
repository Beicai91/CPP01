#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}


void    Harl::debug(void)
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    return ;
}

void    Harl::info(void)
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    return ;
}

void    Harl::warning(void)
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
    return ;
}

void    Harl::error(void)
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
    return ;
}

void    Harl::complain(std::string level)
{
    int i;

    t_func  funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    i = 0;
    while (i < 4 && levels[i].compare(level))
        i++;
    if (i < 4)
        (this->*funcs[i])();
    else if (!level.compare("EXIT"))
        return ;
    else
        std::cout << "Invalid input." << std::endl;
}