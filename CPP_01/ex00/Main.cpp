#include "Zombie.hpp"

int main(){
    Zombie *Zombie;
    Zombie = newZombie("akhi");
    Zombie->Announce();
    RandomChump("miswak");
    delete Zombie;
}