#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA{
	private:
		std::string const name;
		Weapon	&_weaponA;
	public:
		HumanA(std::string name, std::string &_weaponA);
		void	Attack();
		void	setType(std::string &Type);
};

#endif