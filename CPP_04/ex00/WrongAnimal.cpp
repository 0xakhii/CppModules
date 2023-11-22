#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const type){
	this->type = type;
	std::cout << "WrongAnimal Type Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy){
	setType(copy.type);
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &copy){
	std::cout << "WrongAnimal Copy Assignment called" << std::endl;
	if (this != &copy)
		setType(copy.type);
	return *this;
}

std::string	WrongAnimal::getType() const{
	return type;
}

void	WrongAnimal::setType(std::string type){
	this->type = type;
}

void	WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal makes sound" << std::endl;
}