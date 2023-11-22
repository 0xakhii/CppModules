#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
	std::cout << "Dog Constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
}

Dog::Dog(std::string const type): Animal(type){
	std::cout << "Dog type Constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog const &copy): Animal(copy){
	std::cout << "Dog copy Constructor called" << std::endl;
	this->_brain = new Brain(*(copy._brain));
}

Dog&	Dog::operator=(Dog const &copy){
	std::cout << "Dog copy Assignment called" << std::endl;
	if (this != &copy)
		Animal::operator=(copy);
	return *this;
}

void	Dog::makeSound() const{
	std::cout << "Dog bark" << std::endl;
}