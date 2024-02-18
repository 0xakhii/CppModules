#include "Form.hpp"

Form::Form(): 
	_name("default"), 
	_signed(false), 
	signGrade(150), 
	execGrade(150){}

Form::Form(std::string const name, int const signGrade, int const execGrade): 
	_name(name), 
	signGrade(signGrade), 
	execGrade(execGrade){
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	else
		_signed = false;
}

Form::Form(Form const &copy): 
	_name(copy._name), 
	signGrade(copy.signGrade), 
	execGrade(copy.execGrade){
	_signed = copy._signed;
}

Form::~Form(){}

std::string const Form::getName() const{
	return _name;
}

bool  Form::getSigned() const{
	return _signed;
}

int   Form::getSignGrade() const{
	return signGrade;
}

int   Form::getExecGrade() const{
	return execGrade;
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

void Form::beSigned(Bureaucrat const &bureaucrat){
	if (bureaucrat.getGrade() > signGrade)
		throw Form::GradeTooLowException();
	else
		_signed = true;
}

std::ostream &operator<<(std::ostream &out, Form &form){
	out << form.getName() << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade() << std::endl;
	return out;
}

Form &Form::operator=(Form const &form){
	if (this == &form)
		return *this;
	_signed = form._signed;
	return *this;
}