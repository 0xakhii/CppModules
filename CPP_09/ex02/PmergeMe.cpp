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

PmergeMe::PmergeMe(std::vector<int> Container, int size){
	std::cout << "before: ";
	for(size_t i = 0; i < 5 && i < Container.size(); i++)
		std::cout << Container[i] << " ";
	if (Container.size() > 5)
		std::cout << "[...]";
	std::cout << std::endl;
	fordJohnsonMergeSort<std::vector<int> >(Container, 0, size - 1);
	std::cout << "after: ";
	for(size_t i = 0; i < 5 && i < Container.size(); i++)
		std::cout << Container[i] << " ";
	if (Container.size() > 5)
		std::cout << "[...]";
	std::cout << std::endl;
}

PmergeMe::PmergeMe(std::deque<int> Container, int size){
	std::cout << "before: ";
	for(size_t i = 0; i < 5 && i < Container.size(); i++)
		std::cout << Container[i] << " ";
	if (Container.size() > 5)
		std::cout << "[...]";
	std::cout << std::endl;
	fordJohnsonMergeSort<std::deque<int> >(Container, 0, size - 1);
	std::cout << "after: ";
	for(size_t i = 0; i < 5 && i < Container.size(); i++)
		std::cout << Container[i] << " ";
	if (Container.size() > 5)
		std::cout << "[...]";
	std::cout << std::endl;
}

