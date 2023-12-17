#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::~Bureaucrat(){}

std::string const Bureaucrat::getName(){
	return this->_name;
}

int	Bureaucrat::getGrade(){
	return this->_grade;
}

