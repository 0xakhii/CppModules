#pragma once

#include <iostream>

class Bureaucrat{
	private:
		std::string const _name;
		int	_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const Name, int Grade);
		~Bureaucrat();
		std::string const getName();
		int	getGrade();
		void	GradeTooHighException(int Grade);
};