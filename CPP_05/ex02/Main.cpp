#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
		Bureaucrat b1("burr", 1);
		ShrubberyCreationForm shr("ana");
		shr.beSigned(b1);
		shr.execute(b1);
}