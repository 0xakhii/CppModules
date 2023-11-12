#include "Fixed.hpp"

Fixed::Fixed(){
	// std::cout << "Default constructor called" << std::endl;
	FixedValue = 0;
}

Fixed::Fixed(const Fixed &fixed){
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed){
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		FixedValue = fixed.FixedValue;
	return *this;
}

int	Fixed::getRawBits(void) const{
	// std::cout << "getRawBits member function called" << std::endl;
	return FixedValue;
}

void Fixed::setRawBits(int const raw){
	FixedValue = raw;
}

Fixed::Fixed(const int value){
	// std::cout << "Int constructor called" << std::endl;
	FixedValue = value << FractionalBits;
}

Fixed::Fixed(const float value){
	// std::cout << "Float constructor called" << std::endl;
	FixedValue = roundf(value * (1 << FractionalBits));
}

float Fixed::toFloat(void) const{
	return (float)FixedValue / (1 << FractionalBits);
}

int Fixed::toInt(void) const{
	return FixedValue >> FractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){
	os << fixed.toFloat();
	return os;
}
/*-----------------------ComparisonOperator---------------------------*/
bool Fixed::operator>(const Fixed &fixed) const{
	return FixedValue > fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const{
	return FixedValue >= fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const{
	return FixedValue < fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const{
	return FixedValue <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const{
	return FixedValue == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const{
	return FixedValue != fixed.getRawBits();
}

/*-----------------------ArithmeticOperator---------------------------*/

Fixed Fixed::operator+(const Fixed &fixed) const{
	return Fixed(toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const{
	return Fixed(toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const{
	return Fixed(toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const{
	return Fixed(toFloat() / fixed.toFloat());
}

/*-----------------------IncrDecrOperator---------------------------*/

Fixed& Fixed::operator++(void){
	FixedValue++;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed& Fixed::operator--(void){
	FixedValue--;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed tmp(*this);
	operator--();
	return tmp;
}

/*-----------------------MaxMin---------------------------*/

Fixed& Fixed::min(Fixed &a, Fixed &b){
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b){
	return (a > b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b){
	return (a < b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b){
	return (a > b) ? a : b;
}