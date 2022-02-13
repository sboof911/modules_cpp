#include <string>
#include <iostream>
#include <fstream>

std::string    replace_string(std::size_t beggin, std::size_t found, std::size_t s1_size, std::string line, std::string replace)
{
    std::string     help;

    help = line.substr(beggin, found - beggin);
    help += replace;
    //help += line.substr(found + replace.size() - s1_size, line.size());
    //return (help);
    return (help);
}


int     main(int argc, char **argv)
{
    std::ifstream   file;
    std::string     line;
    std::size_t     found;

    if (argc > 4)
    {
        std::cout << "Nombre d'arguments est supérieur á 3" << std::endl;
        return (0);
    }
    file.open(argv[1]);
    if (file.is_open())
    {
        std::string     file_name = argv[1];
        std::string     s1 = argv[2];
        std::string     s2 = argv[3];
        file_name += ".replace";

        std::ofstream   file_help(file_name);
        if (file_help.is_open())
        {
            std::string     replacement;

            while (std::getline(file, line))
            {
                found = line.find(argv[2]);
                std::size_t beggin = 0;
                while (found != std::string::npos)
                {
                    //std::cout << "beggin = " << beggin << "and found = " << found << std::endl;
                    replacement += replace_string(beggin, found, s1.size(), line, s2);
                    beggin = found;
                    found = line.find(argv[2], found + 1);
                    beggin = beggin - s1.size() + s2.size() - 1; // find the math behind that
                }
                replacement += line.substr(beggin, line.size() - beggin);
                file_help << replacement << std::endl;
                replacement = "";
            }
        }
        else
        {
            std::cout<< "something wrong" << std::endl;
            return (0);
        }
    }
    else
    {
        std::cout << "Impossible d'ouvrir le fichier" << std::endl;
        return (0);
    }
}