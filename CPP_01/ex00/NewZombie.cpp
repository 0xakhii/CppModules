#include "Zombie.hpp"

Zombie* newZombie(std::string name){
    Zombie* zombie = new Zombie();
    zombie->SetName(name);
    return zombie;
}

