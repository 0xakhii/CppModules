#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm{
	private:
		std::string const 	_name;
		bool 				_signed;
		const int 			signGrade;
		const int 			execGrade;
	public:
		AForm();
		AForm(std::string const _name, const int signGrade, const int execGrade);
		AForm(AForm const &copy);
		virtual ~AForm();
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

std::ostream &operator<<(std::ostream &out, AForm &form);