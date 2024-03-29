#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("ShrubberyCreationForm", 145, 137){
		_target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target):
	Form("ShrubberyCreationForm", 145, 137){
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

std::string	ShrubberyCreationForm::getTarget(){
	return _target;
}

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm &_shrubbery){
	out << "ShrubberyCreationForm target: " << _shrubbery.getTarget() << std::endl;
	return out;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shrubbery){
	if (this == &shrubbery)
		return *this;
	_target = shrubbery._target;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy):
	Form(copy){
		_target = copy._target;
}