#include "ScavTrap.hpp"

int main(){
	ScavTrap scavtrap1("ScavTrap1");
	ScavTrap scavtrap2("ScavTrap2");
	ScavTrap scavtrap3("ScavTrap3");

	scavtrap1.setAttackDamage(5);
	scavtrap3.setAttackDamage(10);
	scavtrap1.attack("ScavTrap2");
	scavtrap2.takeDamage(scavtrap1.getAttackDamage());
	scavtrap3.attack("ScavTrap");
	scavtrap2.takeDamage(scavtrap1.getAttackDamage());
	scavtrap1.guardGate();
	scavtrap3.attack("ScavTrap2");
	scavtrap2.takeDamage(scavtrap3.getAttackDamage());
	scavtrap2.beRepaired(10);

}
