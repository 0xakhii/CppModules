#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm : public Form{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm(std::string const _target);
		~ShrubberyCreationForm();
		void	execute(Bureaucrat const & executor) const;
};