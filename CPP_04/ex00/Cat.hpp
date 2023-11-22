#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		~Cat();
		Cat(std::string const type);
		Cat(Cat const &copy);
		Cat&	operator=(Cat const &copy);
		void	makeSound() const;
};

#endif