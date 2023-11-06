#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB{
	private:
		std::string const name;
		Weapon	*_weaponB;
	public:
		HumanB(std::string name);
		void	Attack();
};

#endif