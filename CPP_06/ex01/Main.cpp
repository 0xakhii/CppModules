<uintptr_t>#include "Serializer.hpp"


int main(){
	Data *ptr = new Data;
	ptr->a = 5;
	std::cout << "ptr value before serialize: " << ptr << std::endl;
	uintptr_t raw =  Serializer::serialize(ptr);
	std::cout << "raw value after deserialize: " << Serializer::deserialize(raw) << std::endl;
	std::cout << "ptr value after serialize: " << raw << std::endl;
	delete ptr;
}