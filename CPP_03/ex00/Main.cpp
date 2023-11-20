#include "ClapTrap.hpp"

int main(){
	ClapTrap clapTrap("clapTrap");
	ClapTrap clapTrap2("clapTrap2");
	ClapTrap clapTrap3("clapTrap3");

	clapTrap.setAttackDamage(5);
	clapTrap3.setAttackDamage(10);
	clapTrap.attack("clapTrap2");
	clapTrap2.takeDamage(clapTrap.getAttackDamage());
	clapTrap3.attack("clapTrap");
	clapTrap2.takeDamage(clapTrap.getAttackDamage());
	clapTrap3.attack("clapTrap2");
	clapTrap2.takeDamage(clapTrap3.getAttackDamage());
	clapTrap.beRepaired(2);
	clapTrap2.beRepaired(10);
}