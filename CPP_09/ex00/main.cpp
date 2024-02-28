#include "BitcoinExchange.hpp"

void	BTC::parseInput(std::string FileContent){
	_date = FileContent.substr(0, FileContent.find("|"));
	int	Year, Month, Day;
	sscanf(_date.c_str(), "%d-%d-%d", &Year, &Month, &Day);
	if (!parseDate(Year, Month, Day))
		std::cout << "Error: bad input => " << _date << std::endl;
	else
		std::cout << _date << "=> " << std::endl;
}

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "Error: bad arguments" << std::endl;
		return 0;
	}
	else{
		std::fstream in_file(av[1]);
		if (!in_file.is_open()){
			std::cout << "Error: Invalid file" << std::endl;
			return 0;
		}
		else{
			BTC _btc;
			std::string	FileContent;
			getline(in_file, FileContent);
			//check for first line (date | value)
			while(getline(in_file, FileContent))
				_btc.parseInput(FileContent);
			in_file.close();
		}
	}
}