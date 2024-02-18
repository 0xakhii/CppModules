#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
	public:
		Intern();
		Intern(Intern const &copy);
		Intern &operator=(Intern const &intern);
		~Intern();
		Form*	makeForm(std::string _name, std::string _target);

};