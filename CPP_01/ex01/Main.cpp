#include "Zombie.hpp"


int main(){
    int N = 2;
    Zombie *Zombie = ZombieHorde(N, "Zombie");
    for (int i = 0; i < N; i++)
        Zombie[i].Announce();
    delete [] Zombie;
}