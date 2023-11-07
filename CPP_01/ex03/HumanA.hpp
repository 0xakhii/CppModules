#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class Weapon;
class HumanA{
	private:
		std::string name;
		Weapon &_weaponA;
	public:
		HumanA(std::string name, Weapon &_weaponA);
		~HumanA();
		void attack();
};

#endif