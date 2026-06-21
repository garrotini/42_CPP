#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(std::string name);
		Animal(const Animal &ct);
		Animal& operator=(const Animal &ct);
		virtual ~Animal();

		virtual void makeSound() const = 0;
		virtual std::string getType() const;
};

#endif
