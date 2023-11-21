#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		Animal(std::string const type);
		Animal(const Animal &);
		void	setType(std::string const &type);
		std::string getType() const;
		Animal&	operator=(const Animal &copy);
		virtual	void makeSound();
};

#endif