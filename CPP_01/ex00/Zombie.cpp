#include "Zombie.hpp"

void    Zombie::Announce(){
    std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::SetName(std::string name){
    this->Name = name;
}

Zombie::~Zombie(){
    std::cout << this->Name << " is dead" << std::endl;
}