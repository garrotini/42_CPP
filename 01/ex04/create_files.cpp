#include "replace.hpp"

void create_files()
{
    std::ofstream file1;
    file1.open("names");
    file1 << NAMES;
    std::cout << std::endl << "!! FILE CREATED: names" << std::endl;
    file1.close();

    std::ofstream file2;
    file2.open("items");
    file2 << ITEMS;
    std::cout << "!! FILE CREATED: items" << std::endl;
    file2.close();


    std::ofstream file3;
    file3.open("praeludium");
    file3 << PRAELUDIUM;
    std::cout << "!! FILE CREATED: praeludium" << std::endl;
    file3.close();

    std::ofstream file4;
    file4.open("dream");
    file4 << DREAM;
    std::cout << "!! FILE CREATED: dream" << std::endl << std::endl;
    file4.close();
    
    std::ofstream file5;
    file5.open("setlist");
    file5 << PRAELUDIUM;
    std::cout << "!! FILE CREATED: setlist" << std::endl << std::endl;
    file5.close();
}

