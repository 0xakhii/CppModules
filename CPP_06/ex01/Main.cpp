#include "Serializer.hpp"

int main(){
	Serializer _serializer;
	Data *ptr = new Data;
	ptr->a = 5;
	std::cout << "ptr value before serialize: " << ptr << std::endl;
	uintptr_t raw =  _serializer.serialize(ptr);
	std::cout << "raw value after deserialize: " << _serializer.deserialize(raw) << std::endl;
	std::cout << "ptr value after serialize: " << raw << std::endl;
	delete ptr;
}