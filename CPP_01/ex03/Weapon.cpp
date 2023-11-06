#include "Weapon.hpp"

Weapon::Weapon(std::string &name){
	this->name = name;
}

std::string const &Weapon::getType(){
	return this->name;
}

void Weapon::setType(std::string &name){
	this->name = name;
}