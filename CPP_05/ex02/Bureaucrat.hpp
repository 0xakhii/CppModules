#pragma once

#include <exception>
#include <iostream>
#include <ostream>
#include <string>
#include "Form.hpp"

class Form;
class Bureaucrat{
	private:
		std::string const _name;
		int	_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const Name, int Grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat();
		/************************************************/
		std::string const 	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(Form &form);
		/************************************************/
		class	GradeTooHighException : public std::exception{
			const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception{
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat);