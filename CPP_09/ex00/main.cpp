#include "BitcoinExchange.hpp"

void	BTC::parseInput(std::string InputContent){
	_date = InputContent.substr(0, InputContent.find("|") - 1);
	int	Year, Month, Day;
	for(size_t i = 0; i < _date.length(); i++){
		if (std::isspace(_date[i]))
			throw "Error: bad input";
	}
	sscanf(_date.c_str(), "%d-%d-%d", &Year, &Month, &Day);
	if (!parseDate(Year, Month, Day))
		throw  "Error: bad input";
	_value = InputContent.substr(InputContent.find("|") + 1, InputContent.length());
	char* endptr;
    float Val = std::strtof(_value.c_str(), &endptr);
	if (endptr == _value || *endptr != '\0')
		throw "Error: Invalid Value";
	if (Val < 0)
		throw "Error: Not a Positive Number";
	else if (Val > 1000)
		throw "Error: Too Large Number";
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