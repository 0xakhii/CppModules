#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form{
	private:
		std::string const 	_name;
		bool 				_signed;
		const int 			signGrade;
		const int 			execGrade;
	public:
		Form();
		Form(std::string const _name, const int signGrade, const int execGrade);
		Form(Form const &copy);
		Form &operator=(Form const &form);
		virtual ~Form();
		/************************************************/
		std::string const 	getName() 		const;
		bool 				getSigned() 	const;
		int  				getSignGrade() 	const;
		int  				getExecGrade() 	const;
		void 				beSigned(Bureaucrat const &bureaucrat);
		/************************************************/
		class	GradeTooHighException : public std::exception{
			const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception{
			const char* what() const throw();
		};
		class	NotSigned : public std::exception{
			const char*	what() const throw();
		};
		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, Form &form);