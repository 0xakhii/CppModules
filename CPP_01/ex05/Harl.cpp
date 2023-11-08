#include "Harl.hpp"

void	Harl::debug(){
	std::cout << "[DEBUG]\nI love having extra bacon for burger. I really do!" << std::endl;
}

void	Harl::info(){
	std::cout << "[INFO]\nI cannot believe adding extra bacon cost more money." << std::endl;
}

void	Harl::warning(){
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free." << std::endl;
}

void	Harl::error(){
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level){
	announce[0] = &Harl::debug; 
	announce[1] = &Harl::info;
	announce[2] = &Harl::warning;
	announce[3] = &Harl::error;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++){
		if (levels[i] == level){
			(this->*announce[i])();
			return ;
		}
	}
	std::cout << "[UNKNOWN]\nI dont know what youre talking about." << std::endl;
}