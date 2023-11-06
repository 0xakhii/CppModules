#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include "HumanA.hpp"
# include "HumanB.hpp"

class Weapon{
    private:
        std::string name;
    public:
        Weapon(std::string name);
        ~Weapon();
        std::string const &getType();
        void setType(std::string &name);
};

#endif