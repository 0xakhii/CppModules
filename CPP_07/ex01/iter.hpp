#pragma once
#include <iostream>

template <typename T>
void	func(T &c){
	std::cout << "every elemnt in the array: " << c << std::endl;
}


template <typename T>
void	iter(T *arr, int len, void (func)(const T&)){
	std::cout << "the address of the array: " << &arr << std::endl;
	for (int i = 0; i < len; i++)
		(func)(arr[i]);
}