#include "BitcoinExchange.hpp"

Btc::Btc(){
}

Btc::~Btc(){
}

void	Btc::setValue(float val){
	Value.push_back(val);
}

std::vector<float> Btc::getValue() const{
	return Value;
}