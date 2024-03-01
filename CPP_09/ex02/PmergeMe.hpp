#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <ctime>

class PmergeMe{
	private:
		std::vector<int>	vectContainer;
		std::deque<int>		deqContainer;
	public:
		PmergeMe();
		PmergeMe(PmergeMe const &copy);
		PmergeMe&	operator=(PmergeMe const &copy);
		~PmergeMe();
};


template <typename T>
void swap(T& container, int i){
    int temp = container[i];
    container[i] = container[i + 1];
    container[i + 1] = temp;
}

template <typename T>
void fordJohnsonSort(T& container, int low, int high){
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    for (int i = low; i < high; i += 2)
        if (container[i] > container[i + 1])
            swap(container, i);
    fordJohnsonSort(container, low, mid);
    for (int i = mid + 1; i <= high; i++){
        int key = container[i];
        int j = i - 1;
        while (j >= low && container[j] > key){
            container[j + 1] = container[j];
            j--;
        }
        container[j + 1] = key;
    }
}

template<typename T>
void	Print(T& Container, int size){
	clock_t start = clock();
	std::cout << "before: ";
	for(size_t i = 0; i < 5 && i < Container.size(); i++)
		std::cout << Container[i] << " ";
	if (Container.size() > 5)
		std::cout << "[...]";
	std::cout << std::endl;
	fordJohnsonSort<T>(Container, 0, size - 1);
	std::cout << "after: ";
	for(size_t i = 0; i < 5 && i < Container.size(); i++)
		std::cout << Container[i] << " ";
	if (Container.size() > 5)
		std::cout << "[...]";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << Container.size() << " elements with std::[..]: "
        << std::fixed << (clock() - start) / (double)CLOCKS_PER_SEC << " us" << std::endl;
}