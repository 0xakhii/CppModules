#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	this->_weaponB = NULL;
}

void	HumanB::attack(){
	if (this->_weaponB == NULL)
		std::cout << this->name << " has no weapon" << std::endl;
	else
		std::cout << this->name << " attacks with his " << this->_weaponB->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon){
	this->_weaponB = &weapon;
}

HumanB::~HumanB(){
}