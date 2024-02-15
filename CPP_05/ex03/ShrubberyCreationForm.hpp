#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string _target);
		~ShrubberyCreationForm();
		std::string	getTarget();
		void	execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm &_shrubbery);