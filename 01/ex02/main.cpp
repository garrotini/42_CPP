#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    // print memory address of: string variable, stringPTR and stringREF
    std::cout << &str << " -> memory address of string variable" << std::endl;
    std::cout << stringPTR << " -> memory address held by stringPTR" << std::endl;
    std::cout << &stringREF << " -> memory address held by stringREF" << std::endl;

    std::cout << "---" << std::endl;

    // print value of: string variable, value pointed by stringPTR, value pointed by stringREF
    std::cout << str << " -> value of string variable" << std::endl;
    std::cout << *stringPTR << " -> value pointed by stringPTR" << std::endl;
    std::cout << stringREF << " -> value pointed by stringREF" << std::endl;

    return 0;
}


