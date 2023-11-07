#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class Weapon;
class HumanB{
	private:
		std::string name;
		Weapon *_weaponB;
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &_weaponB);
};

#endif