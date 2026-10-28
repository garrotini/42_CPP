#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <list>
#include <stack>
#include <deque>

template<typename T, typename Container = std::deque<T> >

class MutantStack : public std::stack<T, Container>
{
	protected:
		using std::stack<T, Container>::c; // `c` -> container inherited from std::stack

	public:
		typedef typename Container::iterator iterator; // "treat this as a type"; reuse the container's own iterator type; e.g: `std::deque<int>::iterator`
		typedef typename Container::const_iterator const_iterator;

		MutantStack(void) : std::stack<T, Container>() {}
		MutantStack(const MutantStack& other) : std::stack<T, Container>(other) {}
		MutantStack& operator=(const MutantStack& other)
		{
			std::stack<T, Container>::operator=(other);
			return (*this);
		}
		~MutantStack(void) {};

		iterator begin() { return (this->c.begin()); };
		iterator end() { return(this->c.end()); };
		const_iterator begin() const { return (this->c.begin()); };
		const_iterator end() const { return (this->c.end()); };
};

#endif

