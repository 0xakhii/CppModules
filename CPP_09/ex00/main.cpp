#include "BitcoinExchange.hpp"

bool	parseDate(int Year, int Month, int Day){
    if (Month < 1 || Month > 12) 
    	return false; 
    if (Day < 1 || Day > 31) 
    	return false;
    if (Month == 2){
			if (((Year % 4 == 0)
				&& (Year % 100 != 0))
				|| (Year % 400 == 0))
        	return (Day <= 29); 
        else
        	return (Day <= 28); 
    }
	if (Month == 4 || Month == 6
		|| Month == 9 || Month == 11)
        return (Day <= 30);
	return true;
}

int	parse_data(std::string &FileContent, Btc &_btc){
	float _value = std::strtof((FileContent.substr(FileContent.find_first_of(",") + 1)).c_str(), NULL);
	std::string date = FileContent.substr(0, FileContent.find_first_of(","));
	int Year, Month, Day;
	sscanf(date.c_str(), "%d-%d-%d", &Year, &Month, &Day);
	if (!parseDate(Year, Month, Day)){
		std::cout << "Error: Invalid Date" << std::endl;
		return 1;
	}
	_btc.setValue(_value);
	return 0;
}

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "Error: bad arguments" << std::endl;
		return 0;
	}
	else{
		std::string FileName = av[1];
		if (!(FileName.substr(FileName.find_last_of(".") + 1) == "csv")){
			std::cout << "Error: Invalid file format" << std::endl;
			return 0;
		}
		std::fstream in_file(av[1]);
		if (!in_file.is_open()){
			std::cout << "Error: Invalid file" << std::endl;
			return 0;
		}
		else{
			Btc _btc;
			std::string	FileContent;
			getline(in_file, FileContent);
			while(getline(in_file, FileContent))
				if (parse_data(FileContent, _btc))
					return 1;
			in_file.close();
		}
	}
}