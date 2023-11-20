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
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
	std::cout << "ClapTrap copy constructor called" << std::endl;
	Name = copy.Name;
	HitPoints = copy.HitPoints;
	EnergyPoints = copy.EnergyPoints;
	AttackDamage = copy.AttackDamage;	
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
	if (EnergyPoints > 0 && HitPoints > 0){
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
		setEnergyPoints(EnergyPoints - 1);
	}
	else
		std::cout << "ClapTrap " << Name << " is dead" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (HitPoints > 0){
		std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
		setHitPoints(HitPoints - amount);
	}
	else
		std::cout << "ClapTrap " << Name << " is dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (HitPoints <= 0)
		std::cout << "ClapTrap " << Name << " is dead" << std::endl;
	else if (EnergyPoints){
		std::cout << "ClapTrap " << Name << " is repaired for " << amount << " points!" << std::endl;
		setEnergyPoints(EnergyPoints + amount);
	}
	else
		std::cout << "ClapTrap " << Name << " is out of energy!" << std::endl;
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
