#include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	FixedValue = 0;
}

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		FixedValue = fixed.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return FixedValue;
}

void Fixed::setRawBits(int const raw){
	FixedValue = raw;
}