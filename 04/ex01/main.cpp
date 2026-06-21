#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "-- cleaning --" << std::endl;
	delete j;
	delete i;

	std::cout << "\n-- CAT tests --\n" << std::endl;

	Cat a;
	Cat clone(a);
	Cat b;
	
	std::cout << "\n";

	a.getBrain()->setIdea(0,"aaa");
	std::cout << "-> " << a.getBrain()->getIdea(0) << std::endl;
	std::cout << "-> " << a.getBrain()->getIdea(1) << std::endl;

	std::cout << "\n";

	clone.getBrain()->setIdea(0, "clone");
	clone.getBrain()->setIdea(21, "ein­und­zwanzig");
	std::cout << "-> " << clone.getBrain()->getIdea(0) << std::endl;
	std::cout << "-> " << clone.getBrain()->getIdea(21) << std::endl;

	std::cout << "\n";

	b = clone;
	std::cout << "-> " << b.getBrain()->getIdea(0) << std::endl;
	std::cout << "-> " << b.getBrain()->getIdea(21) << std::endl;

	std::cout << "\n";

	b = a;
	std::cout << "\n";

	std::cout << "-> " << b.getBrain()->getIdea(0) << std::endl;
	std::cout << "-> " << b.getBrain()->getIdea(21) << std::endl;

	std::cout << "\n-- BRAIN test: --\n";
	std::cout << "\n";

	std::cout << "(brain_clone created from the clone's brain)\n";
	Brain *brain_clone = clone.getBrain();
	std::cout << "-> " << brain_clone->getIdea(0) << std::endl;
	std::cout << "-> " << brain_clone->getIdea(21) << std::endl;

	std::cout << "\n(brain_a created from the cat a brain)\n";
	Brain *brain_a(a.getBrain());
	std::cout << "-> " << brain_a->getIdea(0) << std::endl;
	std::cout << "-> " << brain_a->getIdea(21) << std::endl;

	std::cout << "\n-- ANIMALS array test: --\n";
	std::cout << "\n";

	Animal *pets[] = 
	{ 
		new Cat(),
		new Dog(),
		new Cat(),
		new Dog(),
	};

	std::cout << "\n";
	for (int i = 0; i < 4; i++)
		pets[i]->makeSound();
	std::cout << "\n";

	for (int i = 0; i < 4; i++)
		delete pets[i];

	std::cout << "\n-- CATS array test: --\n\n";

	Cat *cats[] = 
	{ 
		new Cat(),
		new Cat(),
		new Cat(),
		new Cat(),
	};

	std::cout << "\n";

	for (int i = 0; i < 4; i++)
		cats[i]->getBrain()->setIdea(0, "general idea");

	cats[2]->getBrain()->setIdea(0, "VERY SPECIAL IDEA");
	
	for (int i = 0; i < 4; i++)
		std::cout << "-> " << cats[i]->getBrain()->getIdea(0) << "\n";
	
	std::cout << "\n";

	for (int i = 0; i < 4; i++)
		delete cats[i];

	std::cout << "\n-- DOGS array test: --\n\n";

	Dog *dogs[] = 
	{ 
		new Dog(),
		new Dog(),
		new Dog(),
		new Dog(),
	};

	std::cout << "\n";

	for (int i = 0; i < 4; i++)
		dogs[i]->getBrain()->setIdea(0, "general idea");

	dogs[2]->getBrain()->setIdea(0, "VERY SPECIAL IDEA");
	
	for (int i = 0; i < 4; i++)
	{
		dogs[i]->makeSound();
		std::cout << "-> " << dogs[i]->getBrain()->getIdea(0) << "\n";
	}
	
	std::cout << "\n";

	for (int i = 0; i < 4; i++)
		delete dogs[i];

	std::cout << "\n-- DOG mandatory tests --\n" << std::endl;

	Dog basic;

	Dog tmp = basic;


	tmp.makeSound();
	basic.makeSound();

	std::cout << "\n";

	return 0;
}
