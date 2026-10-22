#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::cout << "__ vector testing __" << std::endl;

	// no push_front(), only push_back()

	std::vector<int> vec;
	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(6);

	try
	{
		int n = 4;
		int i = easyfind(vec, n);
		std::cout << "Found value `" << n << "` in vector at index: [" << i << "]" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		int n = 5;
		int i = easyfind(vec, n);
		std::cout << "Found value `" << n << "` in vector at index: [" << i << "]" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "__ list testing __" << std::endl;

	// vector has no push_front(), but lists have it!

	std::list<int> lst;
	lst.push_back(1);
	lst.push_front(3);
	lst.push_front(5);

	try
	{
		int n = 4;
		int i = easyfind(lst, n);
		std::cout << "Found value `" << n << "` in vector at index: [" << i << "]" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		int n = 5;
		int i = easyfind(lst, n);
		std::cout << "Found value `" << n << "` in vector at index: [" << i << "]" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}

