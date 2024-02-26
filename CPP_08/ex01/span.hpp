#pragma once

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

class Span{
	private:
		unsigned int	Size;
		std::vector<int> Container;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		Span&	operator=(const Span &copy);
		~Span();
		unsigned int	getSize()const;
		const std::vector<int> &getContainer()const;
		void	addNumber(int number);
		int		shortestSpan()const;
		int		longestSpan()const;
		void	LotOfNumbers(size_t _number);
};

std::ostream&	operator<<(std::ostream &out, Span &span);