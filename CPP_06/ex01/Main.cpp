#include "Serializer.hpp"


int main(){
	Data *ptr = new Data;
	std::cout << "ptr value before serialize: " << ptr << std::endl;
	uintptr_t raw =  Serializer::serialize(ptr);
	std::cout << "ptr value after deserialize: " << Serializer::deserialize(raw) << std::endl;
	std::cout << "raw value after serialize: 0x" << std::hex << raw << std::endl;
	delete ptr;
}