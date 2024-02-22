#include "iter.hpp"

int main(){
	char str[] = "hello";
	int arr[] = {0, 1, 2, 5, 6};
	std::cout << "first array: " << std::endl;
	::iter(str, sizeof(str)/sizeof(char), func<char>);
	std::cout << "second array: " << std::endl;
	::iter(arr, (sizeof(arr)/sizeof(*arr)), func<int>);
}