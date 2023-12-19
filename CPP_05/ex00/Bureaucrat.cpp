#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string const Name, int Grade) : _name(Name){
	this->_grade = Grade;
}

Bureaucrat::~Bureaucrat(){}

std::string const Bureaucrat::getName(){
	return this->_name;
}

int	Bureaucrat::getGrade(){
	return this->_grade;
}
