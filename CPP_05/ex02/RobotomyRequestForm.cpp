#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	Form("RobotomyRequestForm", 72, 45){
	_target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target):
	Form("RobotomyRequestForm", 72, 45){
		this->_target = _target;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (getSigned() == true && executor.getGrade() <= getExecGrade()){
		std::cout << "*DRILLING NOISES*\n" << _target;
		std::cout << "has been  robotomized successfully 50% of the time" << std::endl;
	}
	else if(getSigned() == false)
		throw NotSigned();
	else
		throw GradeTooLowException();
}

std::string	RobotomyRequestForm::getTarget(){
	return _target;
}

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm &_robotomy){
	out << "RobotomyRequestForm target: " << _robotomy.getTarget() << std::endl;
	return out;
}