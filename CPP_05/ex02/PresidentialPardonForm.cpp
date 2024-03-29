#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("PresidentialPardonForm", 25, 5){
		_target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target):
	Form("PresidentialPardonForm", 25, 5){
		this->_target = _target;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (getSigned() == true && executor.getGrade() <= getExecGrade()){
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else if(getSigned() == false)
		throw NotSigned();
	else
		throw GradeTooLowException(); 
}

std::string	PresidentialPardonForm::getTarget(){
	return _target;
}

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm &_president){
	out << "Presidentialform target: " << _president.getTarget() << std::endl;
	return out;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &president){
	if (this == &president)
		return *this;
	_target = president._target;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy):
	Form(copy){
		_target = copy._target;
}