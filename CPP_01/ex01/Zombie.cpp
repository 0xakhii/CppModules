#include "Zombie.hpp"

Zombie::Zombie( void ) {
}

Zombie::~Zombie( void ) {
    std::cout << this->name << ": Is Dead." << std::endl;
}

void    Zombie::Announce( void ) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::SetName( std::string name ) {
    this->name = name;
}