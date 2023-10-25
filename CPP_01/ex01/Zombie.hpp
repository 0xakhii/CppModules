#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
    private:
        std::string Name;
    public:
        void    Announce();
        void    SetName();
        std::string getName();
        ~Zombie();
};

Zombie* NewZombie(std::string name);


#endif ZOMBIE_HPP