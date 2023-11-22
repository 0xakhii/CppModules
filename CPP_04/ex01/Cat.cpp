#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
	std::cout << "Cat Constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat(){
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
}

Cat::Cat(std::string const type): Animal(type){
	std::cout << "Cat type Constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const &copy): Animal(copy){
	std::cout << "Cat copy Constructor called" << std::endl;
	this->_brain = new Brain(*(copy._brain));
}

Cat&	Cat::operator=(Cat const &copy){
	std::cout << "Cat copy Assignment called" << std::endl;
	if (this != &copy)
		Animal::operator=(copy);
	return *this;
}

void	Cat::makeSound() const{
	std::cout << "Cat meow" << std::endl;
}