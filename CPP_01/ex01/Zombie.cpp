#include "Zombie.hpp"

Zombie* NewZombie(std::string name){
    Zombie *zombie = new Zombie();
    zombie->SetName(name);
    return zombie;
}

void Zombie::Announce(){
    
}