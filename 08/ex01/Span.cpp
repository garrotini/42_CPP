#include "Span.hpp"
#include <algorithm>
#include <climits>
#include <limits>
#include <stdexcept>


Span::Span(void) : vec(), limit(0) {}

Span::Span(unsigned int N) : vec(), limit(N) {}

Span::Span(const Span &src) : vec(src.vec), limit(src.limit) {}

Span& Span::operator=(const Span &other)
{
	if (this == &other)
		return (*this);
	vec = other.vec;
	limit = other.limit;
	return (*this);
}

Span::~Span(void) {}

void Span::addNumber(long x)
{
	if (vec.size() >= this->limit)
		throw (std::runtime_error("No space left inside the container"));
	if (x > INT_MAX || x < INT_MIN)
		throw (std::runtime_error("Values need to be inside the INT_MAX and INT_MIN range"));
	vec.push_back(static_cast<int>(x));
}

unsigned int Span::getLimit() const
{
	return (this->limit);
}

int Span::shortestSpan() const
{
	if (vec.size() <= 1)
		throw (std::runtime_error("No space left for a vector"));

	std::vector<int> sorted(vec);
   	std::sort(sorted.begin(), sorted.end());

	long min = LONG_MAX;

	for (size_t i = 0; i < sorted.size() - 1; i++)
	{
		if (sorted[i+1] - sorted[i] < min)
			min = sorted[i+1] - sorted[i];
	}

	return (static_cast<int>(min));
}

int Span::longestSpan() const
{
	if (vec.size() <= 1)
		throw (std::runtime_error("No space left for a vector"));

	int min = *std::min_element(vec.begin(), vec.end());
	int max = *std::max_element(vec.begin(), vec.end());

	return (max-min);
}

