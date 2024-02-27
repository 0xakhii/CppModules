#pragma once

#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>
#include <cstdlib>

class Btc{
	private:
		std::vector<float> 			Value;
		std::vector<const char *>	Date;
	public:
		Btc();
		~Btc();
		void	setValue(float val);
		std::vector<float> getValue() const;
		void	setDate(std::string Date);
		// std::vector<>
};