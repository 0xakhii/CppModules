#include "ClapTrap.hpp"

int main(){
	ClapTrap clap("ClapTrap");
	ClapTrap clap2("ClapTrap2");

	clap.attack("ClapTrap2");
	clap2.takeDamage(10);
	clap2.beRepaired(10);
	return 0;
}