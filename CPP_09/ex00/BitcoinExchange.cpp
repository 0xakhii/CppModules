#include "BitcoinExchange.hpp"

BTC::BTC(){
}

BTC::BTC(BTC const &copy){
	*this = copy;
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