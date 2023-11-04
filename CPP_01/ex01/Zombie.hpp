#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{  
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void    Announce(void);
        Zombie* NewZombie(std::string name);
        void    SetName(std::string name);
};

Zombie*    ZombieHorde(int N, std::string name);

#endif