#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	std::cout << "FragTrap default constructor called" << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name){
	std::cout << "FragTrap string constructor called" << std::endl;
	ClapTrap::setName(name);
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy){
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &copy){
	if (this != &copy){
		std::cout << "FragTrap assignation operator called" << std::endl;
		ClapTrap::operator=(copy);
	}
	return *this;
}

void	FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << Name << " is asking for high fives" << std::endl;
}