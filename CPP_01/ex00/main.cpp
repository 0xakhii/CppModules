#include "Zombie.hpp"

int main(){
    Zombie *Zombie;
    Zombie = newZombie("akhi");
    Zombie->announce();
    RandomChump("miswak");
    delete Zombie;
}