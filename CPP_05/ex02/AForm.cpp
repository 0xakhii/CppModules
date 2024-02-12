#include "AForm.hpp"

AForm::AForm(): 
	_name("default"), 
	_signed(false), 
	signGrade(150), 
	execGrade(150){}

AForm::AForm(std::string const name, int const signGrade, int const execGrade): 
	_name(name), 
	signGrade(signGrade), 
	execGrade(execGrade){
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
	else
		_signed = false;
}

AForm::AForm(AForm const &copy): 
	_name(copy._name), 
	signGrade(copy.signGrade), 
	execGrade(copy.execGrade){
	_signed = copy._signed;
}

AForm::~AForm(){}

std::string const AForm::getName() const{
	return _name;
}

bool  AForm::getSigned() const{
	return _signed;
}

int   AForm::getSignGrade() const{
	return signGrade;
}

int   AForm::getExecGrade() const{
	return execGrade;
}

const char* AForm::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

void AForm::beSigned(Bureaucrat const &bureaucrat){
	if (bureaucrat.getGrade() > signGrade)
		throw AForm::GradeTooLowException();
	else
		_signed = true;
}


std::ostream &operator<<(std::ostream &out, AForm &Aform){
	out << Aform.getName() << ", sign grade: " << Aform.getSignGrade() << ", exec grade: " << Aform.getExecGrade() << std::endl;
	return out;
}