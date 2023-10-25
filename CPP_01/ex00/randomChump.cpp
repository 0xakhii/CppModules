#include "Zombie.hpp"

void RandomChump( std::string name ){
    Zombie zombie;
    zombie.SetName(name);
    zombie.announce();
}