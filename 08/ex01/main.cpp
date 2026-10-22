#include "Span.cpp"

int main()
{
	std::srand(static_cast<unsigned>(std::time(NULL)));

	std::cout << "__ Unity test __" << std::endl;

	Span sp1(4);

	sp1.addNumber(1);
	sp1.addNumber(2);
	sp1.addNumber(3);
	sp1.addNumber(4);

	std::cout << "shortest span: " << sp1.shortestSpan() << std::endl;
	std::cout << "longest  span: " << sp1.longestSpan() << std::endl;

	std::cout << "__ Dozen test __" << std::endl;

	Span sp2(4);

	sp2.addNumber(10);
	sp2.addNumber(20);
	sp2.addNumber(30);
	sp2.addNumber(40);

	std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << "longest  span: " << sp2.longestSpan() << std::endl;

	std::cout << "__ 10k test __" << std::endl;

	Span sp3(10000);

	for (int i = 1; i <= 10000; i++)
		sp3.addNumber(i);

	std::cout << "shortest span: " << sp3.shortestSpan() << std::endl;
	std::cout << "longest  span: " << sp3.longestSpan() << std::endl;
	
	std::cout << "__ 10k random test __" << std::endl;

	Span sp4(10000);

	for (int i = 1; i <= 10000; i++)
		sp4.addNumber(rand()%INT_MAX);

	std::cout << "shortest span: " << sp4.shortestSpan() << std::endl;
	std::cout << "longest  span: " << sp4.longestSpan() << std::endl;

	std::cout << "__ subject test __" << std::endl;

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	return 0;
}

