#include "Form.hpp"

Form::Form(): _name("default"), _signed(false), signGrade(), execGrade(){}

Form::Form(std::string const name, int const signGrade, int const execGrade): _name(name), signGrade(signGrade), execGrade(execGrade){
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	else
		_signed = false;
}

Form::~Form(){}

std::string const Form::getName() const {
	return _name;
}

int   Form::getSignGrade(){
	return signGrade;
}

int   Form::getExecGrade(){
	return execGrade;
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &out, Form &form){
	out << form.getName() << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade() << std::endl;
	return out;
}