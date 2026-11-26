#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <cstdlib>

int main()
{
	std::map<std::string, int> map1;

	map1["ana"] = 10;

	// std::cout << "count ana: " << map1.count("ana") << std::endl;

	int i = 1;
	// print map
	std::cout << "test " << i++ << std::endl;
	for (std::map<std::string, int>::const_iterator it = map1.begin(); it != map1.end(); ++it)
		std::cout << it->first << " : " << it->second << "; " << std::endl;
	std::cout << "- - - - -" << std::endl;

	map1["cat"] = 30;

	// print map
	std::cout << "test " << i++ << std::endl;
	for (std::map<std::string, int>::const_iterator it = map1.begin(); it != map1.end(); ++it)
		std::cout << it->first << " : " << it->second << "; " << std::endl;
	std::cout << "- - - - -" << std::endl;

	std::string filename = "data.csv";

	std::ifstream infile(filename.c_str());
	
	if (!infile.is_open())
	{
		std::cerr << "Error opening file: " << filename << std::endl;
		return 1;
	}

	std::string str1, str2;

	// "dumb function": it just ignores the first line of data.csv
	std::getline(infile,str1);

	while(std::getline(infile,str1,',') && std::getline(infile, str2, '\n'))
	{
		int value = atoi(static_cast<const char *>(str2.c_str()));
		map1[str1] = value;
	}
		
	// print map
	std::cout << "test " << i++ << std::endl;
	for (std::map<std::string, int>::const_iterator it = map1.begin(); it != map1.end(); ++it)
		std::cout << it->first << " : " << it->second << "; " << std::endl;
	std::cout << "- - - - -" << std::endl;

	return 0;
}
