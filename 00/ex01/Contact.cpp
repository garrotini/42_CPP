#include "Contact.hpp"

void Contact::addContact(void)
{
    while (this->first.empty()) 
    {
	std::cout << "Enter first name: ";
	getline(std::cin,this->first);
	if (this->first.empty())
	    std::cout << EMPTY_FIELD << std::endl;
    }
    while (this->last.empty()) 
    {
	std::cout << "Enter last name: ";
	getline(std::cin,this->last);
	if (this->last.empty())
	    std::cout << EMPTY_FIELD << std::endl;
    }
    while (this->nick.empty()) 
    {
	std::cout << "Enter nickname: ";
	getline(std::cin,this->nick);
	if (this->nick.empty())
	    std::cout << EMPTY_FIELD << std::endl;
    }
    while (this->phone.empty()) 
    {
	std::cout << "Enter phone number: ";
	getline(std::cin,this->phone);
	if (this->phone.empty())
	    std::cout << EMPTY_FIELD << std::endl;
    }
    while (this->secret.empty()) 
    {
	std::cout << "Enter darkest secret: ";
	getline(std::cin,this->secret);
	if (this->secret.empty())
	    std::cout << EMPTY_FIELD << std::endl;
    }
};

std::string truncate(std::string s)
{
    if (s.length() > 10)
	return s.substr(0,9) + ".";
    return s;
}

void Contact::printContact(void) 
{
    std::cout << std::right << std::setw(10) << truncate(this->first) << "|";
    std::cout << std::right << std::setw(10) << truncate(this->last) << "|";
    std::cout << std::right << std::setw(10) << truncate(this->nick) << "|";
    std::cout << std::endl;
};

void Contact::printData(void)
{
    std::cout << std::left << std::setw(14) << "First Name" << ": " << first << std::endl;
    std::cout << std::left << std::setw(14) << "Last Name" << ": " << last << std::endl;
    std::cout << std::left << std::setw(14) << "Nickname" << ": " << nick << std::endl;
    std::cout << std::left << std::setw(14) << "Phone Number" << ": " << phone << std::endl;
    std::cout << std::left << std::setw(14) << "Darkest Secret" << ": " << secret << std::endl;
};


