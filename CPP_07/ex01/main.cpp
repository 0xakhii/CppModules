#include "iter.hpp"

int main(){
	char str[] = "hello";
	int arr[] = {0, 1, 2, 5, 6};
	::iter(str, sizeof(str)/sizeof(char), func);
	::iter(arr, (sizeof(arr)/sizeof(*arr)), func);
}