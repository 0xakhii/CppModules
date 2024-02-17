#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Form*	Intern::makeForm(std::string _name, std::string _target){
	Form*	form;
	std::string formName;
	for(size_t i = 0; i < _name.length(); i++){
		if (_name[i] != ' ')
			formName += tolower(_name[i]);
	}
	std::string Name[3] = {"shrubberycreation", "robotomyrequest", "presidentialpardon"};
	int j = 0;
	while (j < 3 && Name[j] != formName)
		j++;
	switch (j){
		case 0:
			form = new ShrubberyCreationForm(_target);
			std::cout << "Intern creates " << formName << std::endl;
			break;
		case 1:
			form = new RobotomyRequestForm(_target);
			std::cout << "Intern creates " << formName << std::endl;
			break;
		case 2:
			form = new PresidentialPardonForm(_target);
			std::cout << "Intern creates " << formName << std::endl;
			break;
		default:
			std::cout << "Form Name doesn't exist" << std::endl;
			form = NULL;
			break;
	}
	return form;
}
