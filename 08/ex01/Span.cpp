#include "Span.hpp"
#include <algorithm>
#include <climits>
#include <limits>
#include <stdexcept>
#include <numeric>

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

int Span::shortestSpan() const
{
	if (vec.size() <= 1)
		throw (std::runtime_error("Not enough elements to compute a span"));

	std::vector<int> sorted(vec);
   	std::sort(sorted.begin(), sorted.end());

	std::vector<int> diffs(sorted.size());
	std::adjacent_difference(sorted.begin(), sorted.end(), diffs.begin());

	return (*std::min_element(diffs.begin() + 1, diffs.end()));
}

int Span::longestSpan() const
{
	if (vec.size() <= 1)
		throw (std::runtime_error("Not enough elements to compute a span"));

	int min = *std::min_element(vec.begin(), vec.end());
	int max = *std::max_element(vec.begin(), vec.end());

	return (max-min);
}

