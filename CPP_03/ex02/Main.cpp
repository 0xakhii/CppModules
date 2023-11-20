#include "FragTrap.hpp"

int main(){
	FragTrap FragTrap1("FragTrap1");
	FragTrap FragTrap2("FragTrap2");
	FragTrap FragTrap3("FragTrap3");

	FragTrap1.setAttackDamage(5);
	FragTrap3.setAttackDamage(10);
	FragTrap1.attack("FragTrap2");
	FragTrap2.takeDamage(FragTrap1.getAttackDamage());
	FragTrap3.attack("FragTrap");
	FragTrap2.takeDamage(FragTrap1.getAttackDamage());
	FragTrap1.highFivesGuys();
	FragTrap3.attack("FragTrap2");
	FragTrap2.takeDamage(FragTrap3.getAttackDamage());
	FragTrap2.beRepaired(10);

}
