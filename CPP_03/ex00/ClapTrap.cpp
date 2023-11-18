#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap default constructor called" << std::endl;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::~ClapTrap(){
}