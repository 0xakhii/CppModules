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
		void	execute(Bureaucrat const & exeutor) const;
};