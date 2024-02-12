#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	AForm("ShrubberyCreationForm", 145, 137){
		_target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target):
	AForm("ShrubberyCreationForm", 145, 137){
		this->_target = _target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (getSigned() == true
		&& executor.getGrade() <= getExecGrade()){
		std::string FileName = _target + "_shrubbery";
		std::ofstream FileToWrite(FileName.c_str());
		if (!FileToWrite.is_open()){
			std::cout << "Failed to open the file" << std::endl;
			return ;
		}
		FileToWrite << "      /\\      \n"
		<< "     /\\*\\     \n"
		<< "    /\\O\\*\\    \n"
		<< "   /*/\\/\\/\\   \n"
		<< "  /\\O\\/\\*\\/\\  \n"
		<< " /\\*\\/\\*\\/\\/\\ \n"
		<< "/\\O\\/\\/*/\\/O/\\\n"
		<< "      ||      \n"
		<< "      ||      \n"
		<< "      ||      \n"
		<< "==============\n";
	}
	else if (getSigned() == false)
		throw NotSigned();
	else
		throw GradeTooLowException();

}
