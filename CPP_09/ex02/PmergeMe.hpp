#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <ctime>

template <typename T>
void swap(T& container, int i){
    int temp = container[i];
    container[i] = container[i + 1];
    container[i + 1] = temp;
}

void	sortvect(std::vector<int>& Container, int size);
void	sortdeq(std::deque<int>& Container, int size);