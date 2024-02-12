#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string _target);
		~ShrubberyCreationForm();
		void	execute(Bureaucrat const & executor) const;
};