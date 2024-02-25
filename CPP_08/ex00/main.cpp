#include "easyfind.hpp"

int main(){
	int int_array[] = {8,2,4,5,5,05,7,2,6,8,1,2,8,7,115,8,12,4,84,584,51,84,51};
	std::vector<int> vect(int_array, int_array + sizeof(int_array) / sizeof(int_array[0]));
	easyfind(vect, 115);
}