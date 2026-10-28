#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <climits>


class Span
{
	private:
		std::vector<int> vec;
		unsigned int limit;
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span &src);
		Span &operator=(const Span &other);
		~Span(void);

		void addNumber(long x);
		int shortestSpan() const;
		int longestSpan() const;
};

#endif

