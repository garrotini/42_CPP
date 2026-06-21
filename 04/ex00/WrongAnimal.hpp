#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal 
{
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &ct);
		WrongAnimal& operator=(const WrongAnimal &ct);
		virtual ~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
};

#endif
