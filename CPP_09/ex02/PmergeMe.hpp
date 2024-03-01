#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <sys/time.h>
#include <cstdlib>

class PmergeMe{
	private:
		std::vector<int>	vectContainer;
		std::deque<int>		deqContainer;
	public:
		PmergeMe();
		PmergeMe(std::vector<int> Container, int size);
		PmergeMe(std::deque<int> Container, int size);
		PmergeMe(PmergeMe const &copy);
		PmergeMe&	operator=(PmergeMe const &copy);
		~PmergeMe();
};


template <typename T>
void swap(T& container, int i, int j) {
    int temp = container[i];
    container[i] = container[j];
    container[j] = temp;
}

template <typename T>
void fordJohnsonMergeSort(T& container, int low, int high) {
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    for (int i = low; i < high; i += 2) {
        if (container[i] > container[i + 1]) {
            swap(container, i, i + 1);
        }
    }
    fordJohnsonMergeSort(container, low, mid);
    for (int i = mid + 1; i <= high; i++) {
        int key = container[i];
        int j = i - 1;
        while (j >= low && container[j] > key){
            container[j + 1] = container[j];
            j--;
        }
        container[j + 1] = key;
    }
}