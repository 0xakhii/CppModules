#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		~Dog();
		Dog(std::string const type);
		Dog(Dog const &copy);
		Dog&	operator=(Dog const &copy);
		void	makeSound() const;
};

#endif