
#include "replace.hpp"

int main(int ac, char *av[])
{
	if (CREATE_TEST == 1)
	{
		create_files();
		return (0);
	}

	if (ac != 4)
	{
		std::cout << "Error: Invalid number of arguments." << std::endl;
		return 1;
	}
	
	std::ifstream inFile;
	std::ofstream outFile;

	std::string input = av[1];

	inFile.open(input.c_str());
	

	if (inFile.fail())
	{
		std::cout << "Error opening input file" << std::endl;
		return 1;
	}

	std::string output = input + ".replace";

	outFile.open(output.c_str());

	if (outFile.fail())
	{
		std::cout << "Error opening outfile file" << std::endl;
		return 1;
	}

	std::string line;
	std::string s1 = av[2];
	std::string s2 = av[3];

	while (std::getline(inFile,line))
	{
		size_t pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s2.length());
		}
		outFile << line << std::endl;
	}

	inFile.close();
	outFile.close();

	return 0;
}

