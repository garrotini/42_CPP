#include "ScalarConverter.hpp"
#include <climits>
#include <cmath>

ScalarConverter::ScalarConverter() { }

ScalarConverter::ScalarConverter(const ScalarConverter &src) { (void)src; }

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) 
{
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter() { }

//

static bool printBaseCase(const std::string &f_val, const std::string &d_val)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << f_val << std::endl;
	std::cout << "double: " << d_val << std::endl;
	return true;
}

static void printAll(double val)
{
	if (std::isnan(val) || std::isinf(val))
		std::cout << "char: impossible" << std::endl;
	else if (val < 32 || val > 126)
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(val) << "'" << std::endl;

	if (val < INT_MIN || val > INT_MAX || std::isnan(val) || std::isinf(val))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(val) << std::endl;

	std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
	std::cout << "double: " << val << std::endl;
}

static bool isBaseCase(const std::string &av)
{
	if (av == "nan" || av == "nanf")       
		return(printBaseCase("nanf", "nan"));
	else if(av == "+inf" || av == "+inff")
		return(printBaseCase("+inff", "+inf"));
	else if (av == "-inf" || av == "-inff")
		return(printBaseCase("-inff", "-inf"));
	else 
		return false;
}

static bool isChar(const std::string &av)
{
	if (av.size() == 1 && !std::isdigit(static_cast<unsigned char>(av[0])))
	{
		char c = av[0];
		printAll(static_cast<double>(c));
		return true;
	}
	return false;
}

// std::isnan(), check if it's not a number!
// https://cppreference-45864d.gitlab-pages.liu.se/en/cpp/numeric/math/isnan.html

static bool isInt(const std::string &av)
{
	(void)av;
	return false;
}

static bool isFloat(const std::string &av)
{
	(void)av;
	return false;
}

static bool isDouble(const std::string &av)
{
	(void)av;
	return false;
}

void ScalarConverter::convert(const std::string &av) 
{
	if (isBaseCase(av) || isChar(av) || isInt(av) || isFloat(av) || isDouble(av))
		return;
	std::cerr << "Error: invalid input" << std::endl;
}


