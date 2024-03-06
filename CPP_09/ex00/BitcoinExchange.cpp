#include "BitcoinExchange.hpp"

BTC::BTC(){
}

BTC::BTC(BTC const &copy){
	*this = copy;
}

float	Calculate(std::string _value, std::string _second){
	float _result = std::atof(_value.c_str()) * std::atof(_second.c_str());
	if (_result < 0)
		throw "Error: Not a Positive Number";
	return _result;
}

void print(std::map<std::string, std::string> &_map, std::string _date, std::string _value) {
    std::map<std::string, std::string>::iterator it = _map.find(_date);
		if (it != _map.end()){
			float CalculatedVal = Calculate(_value, it->second);
			std::cout << _date << " => " << _value << " = " << CalculatedVal << std::endl;
		}
		else{
			it = _map.lower_bound(_date);
			if (it == _map.begin())
				return ;
			else{
				--it;
				float CalculatedVal = Calculate(_value, it->second);
				std::cout << _date << " => " << _value << " = " << CalculatedVal << std::endl;
			}
		}
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
		try{
			parseInput(InputContent);
			print(_map, _date, _value);
		}
		catch(const char *msg){
			std::cout << msg << " => " << InputContent << std::endl;
		}
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
	if (Year < 2009 || Year > 2024)
		return false;
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