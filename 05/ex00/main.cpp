#include <iostream>

int main()
{
	int n = 10;
	int m = 0;

	try
	{
		if (m == 0)
			throw "Divison by zero";
		std::cout << "Answer: " << n/m << std::endl;
	}
	catch (const char* msg
	{
		std::cout << "Error: " << msg << std::endl;
	}
	return 0;
}

