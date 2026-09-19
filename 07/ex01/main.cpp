#include "iter.hpp"
#include <cctype>

static void printInt(int const &x)
{
	std::cout << x << std::endl;
}

static void print_triple_Int(int const &x)
{
	std::cout << 3*x << std::endl;
}

static void changeInt(int &x)
{
	x = 99;
}

static void fn_upper(char &c)
{
	char k = toupper(c);
	std::cout << k << std::endl;
}

static void fake_rot13(char &c)
{
	int k = c+13;
	if (k > 126)
		k = 48;
	std::cout << static_cast<char>(k) << std::endl;
}

template <typename T>
void printTemplate(const T &x)
{
	std::cout << x << std::endl;
}

int main()
{
	int a_int[5] = {1,2,3,4,5};

	std::cout << "__INT print array__" << std::endl;
	iter(a_int, 5, printInt);
	std::cout << "__INT print triples__" << std::endl;
	iter(a_int, 5, print_triple_Int);
	std::cout << "__INT change array, print new values__" << std::endl;
	iter(a_int, 5, changeInt);
	iter(a_int, 5, printInt);

	char abc[4] = "abc";
	char zaza[5] = "zaza";

	std::cout << "__STR 'abc' upper, fake rot13__" << std::endl;
	iter(abc, 3, fn_upper);
	iter(abc, 3, fake_rot13);
	std::cout << "__STR 'zaza' upper, fake rot13__" << std::endl;
	iter(zaza, 4, fn_upper);
	iter(zaza, 4, fake_rot13);

	std::string array[] = {"first", "second", "third"};
	std::cout << "__STR array, print__" << std::endl;
	iter(array, 3, printTemplate<std::string>);
	// iter(array[0], 5, fake_rot13);


	return 0;
}
