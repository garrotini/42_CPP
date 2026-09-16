#include <cstdint>
#include <iostream>
#include <memory>

using namespace std;

// creating structure mystruct
struct mystruct {
    int x;
    int y;
    char c;
    bool b;
};

int main()
{
	mystruct s;
	
	s.x = 5;
    s.y = 10;
    s.c = 'a';
    s.b = true;
	
	int *p = reinterpret_cast<int*>(&s);

	std::cout << "value of p: " << p << std::endl;
	std::cout << "value of *p: " << *p << std::endl;
	std::cout << "address of s: " << &s << std::endl;

	std::cout << "size of s: " << sizeof(s) << std::endl;
	std::cout << "size of s.x: " << sizeof(s.x) << std::endl;
	std::cout << "size of s.c: " << sizeof(s.c) << std::endl;

	p++;
	std::cout << "value of *p: " << *p << std::endl;

	p++;

	char *ch = reinterpret_cast<char*>(p);
	
	std::cout << "value of *ch: " << *ch << std::endl;
	std::cout << "value of *p: " << *p << std::endl;
	std::cout << "value of *p: " << reinterpret_cast<char*>(p) << std::endl;
	
	ch++;
	p++;

	bool *n = reinterpret_cast<bool*>(ch);
	bool *m = reinterpret_cast<bool*>(p);

	std::cout << "value of *n: " << *n << std::endl;
	std::cout << "value of *m: " << *m << std::endl;


	std::cout << "value of *ch: " << reinterpret_cast<bool*>(ch) << std::endl;
	std::cout << "value of *p: " << reinterpret_cast<bool*>(p) << std::endl;
	std::cout << "____" << std::endl;

	uintptr_t ptr = reinterpret_cast<uintptr_t>(&s);

	std::cout << "value of ptr: " << ptr << std::endl;
	std::cout << "address of s: " << &s << std::endl;

	mystruct *ss = reinterpret_cast<mystruct*>(ptr);

	std::cout << "value of ss: " << ss  << std::endl;
	// std::cout << "value of ss.x through ptr: " << reinterpret_pointer_cast<mystruct*>(ss.x);
	
	std::cout << "value of *ptr: " << reinterpret_cast<unsigned long*>(ptr) << std::endl; 
	std::cout << "value of *ptr: " << reinterpret_cast<int*>(ptr) << std::endl; 

	std::cout << "address of s: " << &s << std::endl;


	return 0;
}
