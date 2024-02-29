#include "BitcoinExchange.hpp"

void	BTC::parseInput(std::string InputContent){
	_date = InputContent.substr(0, InputContent.find("|"));
	int	Year, Month, Day;
	sscanf(_date.c_str(), "%d-%d-%d", &Year, &Month, &Day);
	if (!parseDate(Year, Month, Day)){
		std::cout << "Error: bad input => " << _date << std::endl;
		return ;
	}
	_value = InputContent.substr(InputContent.find("|") + 1, InputContent.length());
	float Val = std::atof(_value.c_str());
	if (Val < 0){
		std::cout << "Error: Not a Positive Number" << std::endl;
		return ;
	}
	else if (Val > 1000){
		std::cout << "Error: Too Large Number" << std::endl;
		return ;
	}
}

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "Error: bad arguments" << std::endl;
		return 0;
	}
	else{
		try{
			BTC _btc(av[1]);
		}
		catch(const char *msg){
			std::cout << msg << std::endl;
		}
	}
}