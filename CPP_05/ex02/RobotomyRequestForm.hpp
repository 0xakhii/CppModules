#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string _target);
		~RobotomyRequestForm();
		std::string	getTarget();
		void	execute(Bureaucrat const & exeutor) const;
};

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm &_robotomy);