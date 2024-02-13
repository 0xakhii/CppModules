#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public Form{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string);
		~PresidentialPardonForm();
		void	execute(Bureaucrat const & executor) const;
};