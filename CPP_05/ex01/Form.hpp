#pragma once

#include "Bureaucrat.hpp"

class Form{
    private:
        std::string const _name;
        bool _signed;
        int const signGrade;
        int const execGrade;
    public:
        Form();
        Form(std::string const _name, int const signGrade, int const execGrade);
        ~Form();
        std::string const getName() const;
        int  getSignGrade();
        int  getExecGrade();
        class	GradeTooHighException : public std::exception{
			const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception{
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Form &form);