#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(PmergeMe const &copy){
	*this = copy;
}

PmergeMe&	PmergeMe::operator=(PmergeMe const &copy){
	if (this == &copy)
		return *this;
	vectContainer = copy.vectContainer;
	deqContainer = copy.deqContainer;
	return *this;
}

