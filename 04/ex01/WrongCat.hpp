#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
	public:
		WrongCat();
		WrongCat(const WrongCat &ct);
		WrongCat& operator=(const WrongCat &ct);
		~WrongCat();

		void makeSound() const;
};

#endif
