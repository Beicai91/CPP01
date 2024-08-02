#include <fstream>
#include <iostream>
#include "fileOCR.hpp"

int main(int argc, char *argv[])
{
    fileOCR files;

    if (argc != 4)
    {
        std::cout << "Invalid arguments" << std::endl;
        return (1);
    }
    files.createDST(argv[1]);
    files.fillDST(argv[2], argv[3]);
    return (0);
}