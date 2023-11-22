#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(std::string type);
		WrongCat(WrongCat const &copy);
		WrongCat &operator=(WrongCat const &copy);
		void makeSound() const;
};

#endif