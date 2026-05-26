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
		void debug(void) ;	
		void info(void)	;	
		void warning(void) ;	
		void error(void) ;
	public:
		Harl(void) ;
		~Harl(void)	;
		void complain(std::string level);
};

#endif
