#include "Harl.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "<Usage>: ./Harl <Level>" << std::endl;
		return 1;
	}
	else{
		if (av[1][0] != '\0' && av[1]){
			Harl harl;
			harl.complain(av[1]);
		}
		else{
			std::cout << "<Usage>: ./Harl <Level>" << std::endl;
			return 1;
		}
	}
}