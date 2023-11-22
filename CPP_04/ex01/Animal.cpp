#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(std::string const type){
	setType(type);
	std::cout << "Animal Type Constructor Called" << std::endl;
}

Animal::Animal(const Animal &copy){
	setType(copy.getType());
	std::cout << "Animal Copy Constructor Called" << std::endl;
}

void	Animal::setType(std::string const _type){
	this->type = _type;
}

std::string Animal::getType() const{
	return (type);
}

Animal&	Animal::operator=(const Animal &copy){
	std::cout << "Animal Copy Assignment Called" << std::endl;
	if (this != &copy)
		setType(copy.type);
	return *this;
}

void	Animal::makeSound() const{
	std::cout << "Animal Makes a Sound" << std::endl;
}