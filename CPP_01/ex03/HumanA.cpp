#include "HumanA.hpp"

void	HumanA::Attack(){
	std::cout << name << " attacks with their " << &_weaponA << std::endl;
}

void	HumanA::setType(std::string &Type){
	_weaponA = Type;
}