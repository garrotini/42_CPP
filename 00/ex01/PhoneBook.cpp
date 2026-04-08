#include "PhoneBook.hpp"

bool PhoneBook::isEmpty(void)
{
    return (count == 0);
}

int min(int x, int y)
{
    if (x < y)
	return x;
    else
	return y;
}

void PhoneBook::searchIndex(int x)
{
    if (x >= 0 && x < min(count, 8))
	contacts[x].printData();
    else
	std::cout << "ERROR: Index " << x << " not assigned to any contact yet." << std::endl;
}

void PhoneBook::addContact(void)
{
    int i = count % 8;
    contacts[i] = Contact();
    contacts[i].addContact();
    count++;
}

void PhoneBook::printAll(void)
{
    std::cout << std::left << std::setw(10) << "index" << "|";
    std::cout << std::left << std::setw(10) << "first name" << "|";
    std::cout << std::left << std::setw(10) << "last name" << "|";
    std::cout << std::left << std::setw(10) << "nickname" << "|";
    std::cout << std::endl;
    
    for (int i = 0; i < 4; i++)
    {
	for (int j = 0; j < 10; j++)
	    std::cout << "-";
	std::cout << "|";
    }
    std::cout << std::endl;

    for (int i = 0; i < min(count,8); i++)
    {
	std::cout << std::right << std::setw(10) << i << "|";
	contacts[i].printContact();
    }
}

int PhoneBook::searchPrompt()
{
    std::cout << "Enter an index <0-7>: ";
    std::string in;
    getline(std::cin, in);

    if (in.empty())
	return -1;

    for (size_t i = 0; i < in.length(); i++)
    {
	if (!std::isdigit(in[i]))
	    return -1;
    }

    int n = std::atoi(in.c_str());
    if (n < 0 || n > 7)
	return -1;
    return n;
}
