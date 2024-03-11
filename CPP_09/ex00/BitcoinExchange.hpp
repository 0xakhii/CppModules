#pragma once

#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>
#include <cstdlib>
#include <map>
#include <cerrno>

class BTC{
	private:
		std::string								_date;
		std::string								_value;
		std::map<std::string, std::string>		_map;
	public:
		BTC();
		BTC(const char* in_file);
		BTC(BTC const &copy);
		BTC&	operator=(BTC const &copy);
		~BTC();
		void	setVal(std::string Value);
		void	setDate(std::string Date);
		void	parseInput(std::string FileContent);
};

bool	parseDate(int Year, int Month, int Day);