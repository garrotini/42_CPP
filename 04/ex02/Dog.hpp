#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
	private:
		Brain* _brain;
	public:
		Dog();
		Dog(const Dog &ct);
		Dog& operator=(const Dog &ct);
		~Dog();

		void makeSound() const;
		Brain* getBrain() ;
};

#endif
