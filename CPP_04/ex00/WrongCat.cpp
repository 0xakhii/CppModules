#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
	std::cout << "WrongCat type constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy){
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &copy) {
	std::cout << "WrongCat copy Assignment called" << std::endl;
	if (this != &copy)
		WrongAnimal::operator=(copy);
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat meow" << std::endl;
}

