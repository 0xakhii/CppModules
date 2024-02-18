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
		srand(time(NULL));
		bool random = rand() % 2;
		if (random)
			std::cout << _target << " has been  robotomized successfully 50% of the time" << std::endl;
		else
			std::cout << _target << " has been  robotomized failed 50% of the time" << std::endl;

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

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &robotomy){
	if (this == &robotomy)
		return *this;
	_target = robotomy._target;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy):
	Form(copy){
		_target = copy._target;
}