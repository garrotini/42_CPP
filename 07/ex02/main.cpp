#include "Array.hpp"

int main()
{
	std::cout << "___ int array tests ___" << std::endl ;

	Array<int> IntArr(5);
	// print basic Int Array
	for (int i = 0; i < 5; i++)
		std::cout << "Index [" << i << "] : " << IntArr[i] << std::endl;

	std::cout << "_ changing array _" << std::endl ;
	IntArr[2] = 42;
	for (int i = 0; i < 5; i++)
		std::cout << "Index [" << i << "] : " << IntArr[i] << std::endl;
	
	std::cout << "___ string array tests ___" << std::endl ;
	
	Array<std::string> StrArr(3);

	// populating the array
	for (int i = 0; i < 3; i++)
		StrArr[i] = "abc";
	// printing it
	for (int i = 0; i < 3; i++)
		std::cout << "Index [" << i << "] : " << StrArr[i] << std::endl;
	// changing it
	std::cout << "_ changing array _" << std::endl ;
	StrArr[0] = "ooo";
	StrArr[1] = "ijk";
	StrArr[2] = "xyz";
	// printing it again
	for (int i = 0; i < 3; i++)
		std::cout << "Index [" << i << "] : " << StrArr[i] << std::endl;

	std::cout << "___ floating array on a fibonacci with rice sequence ___" << std::endl ;

	Array<float> FloArr(12);

	// populating the array, fibonacci
	FloArr[0] = 1.1;
	FloArr[1] = 1.1;
	for (int i = 2; i < 12; i++)
		FloArr[i] = FloArr[i-1] + FloArr[i-2] ;
	// printing it
	for (int i = 0; i < 12; i++)
		std::cout << "Index [" << i << "] : " << FloArr[i] << std::endl;

	std::cout << "___ double array on a factorial sequence ___" << std::endl ;

	Array<double> DblArr(12);

	DblArr[1] = 1;
	// populating the array, factorial
	for (int i = 2; i < 12; i++)
		DblArr[i] = i * DblArr[i-1] ;

	// printing it
	for (int i = 0; i < 12; i++)
		std::cout << "Index [" << i << "] : " << DblArr[i] << std::endl;
	

	return 0;
}


