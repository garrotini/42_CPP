#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <ostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include "Contact.hpp"

#define ERROR_INDEX "ERROR: Invalid input for index."
#define ERROR_EMPTY "ERROR: PhoneBook is empty."

class PhoneBook
{
    private:
	Contact contacts[8];
	int count;

    public:
	PhoneBook(void) : count(0) {}

	bool isEmpty(void);
	void addContact(void);
	void printAll(void);
	int searchPrompt();
	void searchIndex(int x);
};

#endif
