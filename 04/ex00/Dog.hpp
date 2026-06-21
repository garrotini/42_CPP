#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal 
{
	public:
		Dog();
		Dog(const Dog &ct);
		Dog& operator=(const Dog &ct);
		~Dog();

		void makeSound() const;
};

#endif
