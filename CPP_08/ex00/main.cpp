#include "easyfind.hpp"

int main(){
	int a[] = {8,2,4,5,5,05,7,2,6,8,1,2,8,7,115,8,12,4,84,584,51,84,51};
	std::vector<int> vect(a, a + sizeof(a) / sizeof(a[0]));
	easyfind(vect, 115);
}