#include "Zombie.hpp"


int main(){
    int N = -1;
    if (N < 0){
        std::cout << "Number of zombies cant be negative" << std::endl;
        return 1;
    }
    Zombie *Zombie = ZombieHorde(N, "Zombie");
    for (int i = 0; i < N; i++)
        Zombie[i].Announce();
    delete [] Zombie;
}