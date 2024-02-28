#include "RPN.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "Error: bad arguments" << std::endl;
		return 0;
	}
	else{
		try{
			RPN _rpn(av[1]);
		}
		catch(const char *msg){
			std::cout << msg << std::endl;
		}
	}
}