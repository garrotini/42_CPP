#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() { }

ScalarConverter::ScalarConverter(const ScalarConverter &src) { (void)src; }

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) 
{
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter() { }

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

	// int
	if (val < INT_MIN || val > INT_MAX || std::isnan(val) || std::isinf(val))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(val) << std::endl;

	// float
	float f_val = static_cast<float>(val);
	std::cout << "float: " << f_val;
	if (f_val == static_cast<int>(f_val))
			std::cout << ".0";
	std::cout << "f" << std::endl;

	// double
	std::cout << "double: " << val;
	if (val == static_cast<int>(val))
		std::cout << ".0";
	std::cout << std::endl;
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
	if (av.size() == 1 && !std::isdigit(static_cast<char>(av[0]))) // or unsigned char?
	{
		char c = av[0];
		printAll(static_cast<double>(c));
		return true;
	}
	return false;
}

static bool isInt(const std::string &av)
{
	if (av.find('.') != std::string::npos || av.find('f') != std::string::npos) // std::string::npos?
		return false;
	
	char *endptr;
	long n = strtol(av.c_str(), &endptr, 10);
	if (*endptr != '\0')
		return false;
	if (n < INT_MIN || n > INT_MAX)
		return false;
	printAll(static_cast<double>(static_cast<int>(n)));
	return true;
}

static bool isDouble(const std::string &av)
{
	if (av.find('.') == std::string::npos)
		return false;
	if (!av.empty() && av[av.size() - 1] == 'f')
		return false;

	char *endptr;
	double val = strtod(av.c_str(), &endptr);
	if (*endptr != '\0')
		return false;
	printAll(val);
	return true;
}

static bool isFloat(const std::string &av)
{
	if (av.empty() || av[av.size() - 1] != 'f')
		return false;

	char *endptr;
	std::string sub = av.substr(0, av.size() - 1);
	float val = strtof(sub.c_str(), &endptr);
	if (*endptr != '\0')
		return false;
	printAll(static_cast<double>(val));
	return true;
}


void ScalarConverter::convert(const std::string &av) 
{
	if (isBaseCase(av) || isChar(av) || isInt(av) || isDouble(av) || isFloat(av))
		return;
	std::cerr << "Error: invalid input" << std::endl;
}

