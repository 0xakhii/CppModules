#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& copy);
		ClapTrap&		operator=(const ClapTrap& copy);
		void			attack(std::string const& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName() const;
		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getAttackDamage() const;
		void			setName(std::string name);
		void			setHitPoints(unsigned int hitPoints);
		void			setEnergyPoints(unsigned int energyPoints);
		void			setAttackDamage(unsigned int attackDamage);
	private:
		std::string		Name;
		unsigned int	HitPoints;
		unsigned int	EnergyPoints;
		unsigned int	AttackDamage;
}

#endif