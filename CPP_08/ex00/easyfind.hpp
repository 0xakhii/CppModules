#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

template <typename T>
void	easyfind(T a, int b){
	typename T::iterator find = std::find(a.begin(), a.end(), b);
	if (find != a.end())
		std::cout << "Element Found: " << b << std::endl;
	else
		std::cout << "Not Found!" << std::endl;
}

