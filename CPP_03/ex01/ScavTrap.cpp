#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
	std::cout << "ScavTrap name constructor called" << std::endl;
	ClapTrap::setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy){
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &copy){
	if (this != &copy){
		std::cout << "ScavTrap assignation operator called" << std::endl;
		ClapTrap::operator=(copy);
	}
	return *this;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << Name << " has entered in Gate keeper mode" << std::endl;
}
