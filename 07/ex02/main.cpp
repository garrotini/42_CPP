#include "Array.hpp"

int main()
{
	std::cout << "___ int array tests ___" << std::endl ;

	try 
	{
		Array<int> IntArr(5);
		// print basic Int Array
		for (int i = 0; i < 5; i++)
			std::cout << "Index [" << i << "] : " << IntArr[i] << std::endl;

		std::cout << "_ changing array _" << std::endl ;
		IntArr[2] = 42;
		for (int i = 0; i < 5; i++)
			std::cout << "Index [" << i << "] : " << IntArr[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	
	std::cout << "___ string array tests ___" << std::endl ;
	
	try 
	{
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
	}
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}


	std::cout << "___ floating array on a fibonacci with rice sequence ___" << std::endl ;

	try 
	{
		Array<float> FloArr(12);

		// populating the array, fibonacci
		FloArr[0] = 1.1;
		FloArr[1] = 1.1;
		for (int i = 2; i < 12; i++)
			FloArr[i] = FloArr[i-1] + FloArr[i-2] ;
		// printing it
		for (int i = 0; i < 12; i++)
			std::cout << "Index [" << i << "] : " << FloArr[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	std::cout << "___ double array on a factorial sequence ___" << std::endl ;
	
	try 
	{
		Array<double> DblArr(12);

		DblArr[1] = 1;
		// populating the array, factorial
		for (int i = 2; i < 12; i++)
			DblArr[i] = i * DblArr[i-1] ;

		// printing it
		for (int i = 0; i < 12; i++)
			std::cout << "Index [" << i << "] : " << DblArr[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}
	
	std::cout << "___ error test: accessing wrong index___" << std::endl ;
	
	try 
	{
		Array<int> Empty;
		std::cout << Empty[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}
	
	std::cout << "___ 2nd error test: accessing wrong index___" << std::endl ;
	
	try 
	{
		Array<int> nar(10);
		std::cout << nar[11] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	std::cout << "___ copy ctor, deep copy ___" << std::endl ;

	try 
	{
		Array<std::string> origin(3);  
		origin[0] = "origin";
		Array<std::string> clone(origin);
		
		for (int i = 0; i < 3; i++)
			std::cout << "Origin Index [" << i << "] : " << origin[i] << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "Clone  Index [" << i << "] : " << clone[i] << std::endl;

		std::cout << "_changing original string_" << std::endl ;
		origin[0] = "o";
		origin[1] = "oo";
		origin[2] = "ooo";
		
		for (int i = 0; i < 3; i++)
			std::cout << "Origin Index [" << i << "] : " << origin[i] << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "Clone  Index [" << i << "] : " << clone[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	std::cout << "___ operator= ___" << std::endl ;

	try
	{
		Array<int> small(2);
		Array<int> big(7);
		small = big; // small is generated from big, so get's size 7
		big = small;
		std::cout << "small size: " << small.size() << std::endl;
		std::cout << "big size: " << big.size() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	std::cout << "___ operator[] ___" << std::endl ;

	try
	{
		Array<int> a(3);
		a[3];
	}
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	return 0;
}


