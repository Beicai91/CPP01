#include "fileOCR.hpp"

fileOCR::fileOCR()
{}

fileOCR::~fileOCR()
{}

void    fileOCR::createDST(std::string sourceFN)
{
    this->_sourceFN = sourceFN;
    this->_destFN = this->_sourceFN + ".replace";
    this->_sourceFile.open(this->_sourceFN, std::ios::binary);
    if (!this->_sourceFile)
    {
        std::cerr << "Error: could not open source file" << std::endl;
        return ;
    }
    this->destFile.open(this->_destFN, std::ios::binary);
    if (!this->destFile)
    {
        std::cerr << "Error: could not create destination file" << std::endl;
        return ;
    }
}

int    fileOCR::fillDST(std::string target, std::string replace)
{
    size_t  pos;
    std::string line;

    while (std::getline(this->_sourceFile, line))
    {
        pos = line.find(target);
        while (pos != std::string::npos)
        {
            this->_updateLine(line, replace, pos, target);
            pos = line.find(target);
        }
        this->destFile << line << "\n";
    }
    this->_sourceFile.close();
    this->destFile.close();
    return (0);
}

void fileOCR::_updateLine(std::string &line, std::string replace, size_t pos, std::string target)
{
    line = line.substr(0, pos) + replace + line.substr(pos + target.size());
    return ;
}