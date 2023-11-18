#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap default constructor called" << std::endl;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "ClapTrap string constructor called" << std::endl;
	Name = name;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy){
	std::cout << "ClapTrap copy assignment called" << std::endl;
	if (this != &copy){
		Name = copy.Name;
		HitPoints = copy.HitPoints;
		EnergyPoints = copy.EnergyPoints;
		AttackDamage = copy.AttackDamage;
	}
	return *this;
}

void ClapTrap::attack(std::string const& target){
	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << "ClapTrap " << Name << " is repaired for " << amount << " points of damage!" << std::endl;
}

std::string ClapTrap::getName() const{
	return Name;
}

unsigned int ClapTrap::getHitPoints() const{
	return HitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const{
	return EnergyPoints;
}

unsigned int ClapTrap::getAttackDamage() const{
	return AttackDamage;
}

void ClapTrap::setName(std::string name){
	Name = name;
}

void ClapTrap::setHitPoints(unsigned int hitPoints){
	HitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints){
	EnergyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage){
	AttackDamage = attackDamage;
}
