#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
    private:
        std::string Name;
    public:
        void    announce();
        void    SetName(std::string name);
        std::string getName();
        ~Zombie();
};

Zombie* newZombie(std::string name);
void    RandomChump( std::string name);

#endif