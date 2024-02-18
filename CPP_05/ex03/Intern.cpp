#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern const &copy){
	*this = copy;
}

Intern &Intern::operator=(Intern const &intern){
	(void)intern;
	return *this;
}

Intern::~Intern(){}

Form*	Intern::makeForm(std::string _name, std::string _target){
	Form*	form;
	std::string Name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int j = 0;
	while (j < 3 && Name[j] != _name)
		j++;
	switch (j){
		case 0:
			form = new ShrubberyCreationForm(_target);
			break;
		case 1:
			form = new RobotomyRequestForm(_target);
			break;
		case 2:
			form = new PresidentialPardonForm(_target);
			break;
		default:
			std::cout << "Form Name doesn't exist" << std::endl;
			return NULL;
	}
	std::cout << "Intern creates " << _name << std::endl;
	return form;
}
