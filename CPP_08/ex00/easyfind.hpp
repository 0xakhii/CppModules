#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

template <typename T>
void	easyfind(T _container, int ToFind){
	typename T::iterator find = std::find(_container.begin(), _container.end(), ToFind);
	if (find != _container.end())
		std::cout << "Element Found: " << ToFind << std::endl;
	else
		std::cout << "Not Found!" << std::endl;
}

