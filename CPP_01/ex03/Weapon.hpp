#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include "HumanA.hpp"
# include "HumanB.hpp"

class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string& getType() const;
		void setType(std::string type);
};

#endif