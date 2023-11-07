#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weaponA(weapon){
	this->name = name;
}

void	HumanA::attack(){
	std::cout << this->name << " attacks with his " << this->_weaponA.getType() << std::endl;
}

HumanA::~HumanA(){
}