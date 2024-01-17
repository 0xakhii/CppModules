#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150){}

Bureaucrat::Bureaucrat(std::string const Name, int Grade) : _name(Name){
	if (Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = Grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name), _grade(copy._grade){}


Bureaucrat::~Bureaucrat(){}

std::string const Bureaucrat::getName() const {
	return this->_name;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat){
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}

int	Bureaucrat::getGrade() const{
	return this->_grade;
}

void Bureaucrat::incrementGrade(){
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade(){
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}