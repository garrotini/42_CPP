#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

#define DEBUG	"DEBUG MODE: verbosing... debugging... checking logs... verifying AC stats!"

#define INFO	"INFO MODE: here you can find friendly CS students. call your mom for help!"

#define WARNING	"WARNING MODE: hey! 42 is sacred space! use it wisely, and do not forget to touch grass!"

#define ERROR	"ERROR MODE: it's been awhile since you've touched grass. GO TOUCH SOME GRASS RIGHT NOW!"


class Harl 
{
	private:
		void debug(void)	{ std::cout << DEBUG	<< std::endl; }
		void info(void)		{ std::cout << INFO		<< std::endl; }
		void warning(void)	{ std::cout << WARNING	<< std::endl; }
		void error(void)	{ std::cout << ERROR	<< std::endl; }
	public:
		Harl(void)	{ std::cout << "you've entered 42 Lisboa!" << std::endl; }
		~Harl(void)	{ std::cout << "you've left 42 Lisboa!" << std::endl; }
		void complain(std::string level);
};

#endif
