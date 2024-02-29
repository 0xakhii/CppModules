#include "BitcoinExchange.hpp"

BTC::BTC(){
}

BTC::BTC(BTC const &copy){
	*this = copy;
}

void print(std::map<std::string, std::string> &_map, std::string _date, std::string _value){
	// std::map<std::string, std::string>::iterator it = _map.find(_date);

	std::cout << "map[_date] : " << _map[_date] << " value: " << _value << std::endl;
	// if (it == _map.end()){
	// 	--it;
		// std::cout << _date << " => " << "= " << std::atof(it->second.c_str()) * std::atof(_value.c_str()) << std::endl;
	// }
}

BTC::BTC(const char* in_file){
	std::fstream Input(in_file);
	std::fstream _db("data.csv");
	if (!Input.is_open() || !_db.is_open())
		throw "Error: Invalid file";
	std::string	InputContent;
	std::string	DataBase;
	std::string key, value;
	while(std::getline(_db, DataBase)){
		key = DataBase.substr(0, 10);
		value = DataBase.substr(11);
		_map[key] = value;
	}
	std::getline(Input, InputContent);
	if (InputContent != "date | value")
		throw "Error: Input first line should start with (date | value)";
	while(std::getline(Input, InputContent)){
		parseInput(InputContent);
		print(_map, _date, _value);
	}
	Input.close();
}

BTC&	BTC::operator=(BTC const &copy){
	if (this == &copy)
		return *this;
	_date = copy._date;
	_value = copy._value;
	_map = copy._map;
	return *this;
}

BTC::~BTC(){
}

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