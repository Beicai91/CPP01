#ifndef FILEOCR_HPP
# define FILEOCR_HPP

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class fileOCR
{
    private:
        std::string _sourceFN;
        std::string _destFN;
        std::ifstream   _sourceFile;
        void    _updateLine(std::string &line, std::string replace, size_t pos, std::string target);
    
    public:
        std::ofstream   destFile;
        fileOCR();
        ~fileOCR();
        void   createDST(std::string sourceFN);
        int    fillDST(std::string target, std::string replace);
};

#endif