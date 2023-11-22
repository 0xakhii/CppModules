#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(std::string const type);
		WrongAnimal(WrongAnimal const &copy);
		WrongAnimal&	operator=(WrongAnimal const &copy);
		virtual void	makeSound() const;
		void			setType(std::string type);
		std::string		getType() const;
};

#endif