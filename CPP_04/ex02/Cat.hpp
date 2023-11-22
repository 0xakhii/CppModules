#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain*	_brain;
	public:
		Cat();
		~Cat();
		Cat(std::string const type);
		Cat(Cat const &copy);
		Cat&	operator=(Cat const &copy);
		void	makeSound() const;
};

#endif