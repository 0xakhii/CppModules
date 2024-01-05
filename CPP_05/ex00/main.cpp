#include "Bureaucrat.hpp"

int main(){
	Bureaucrat bureaucrat;
	std::cout << bureaucrat;
	try{
		Bureaucrat bureaucrat1("bureaucrat1", -1);
		std::cout << bureaucrat1;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat bureaucrat2("bureaucrat2", 151);
		std::cout << bureaucrat2;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat bureaucrat3("bureaucrat3", 0);
		std::cout << bureaucrat3;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat bureaucrat4("bureaucrat4", 150);
		std::cout << bureaucrat4;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat bureaucrat5("bureaucrat5", 71);
		std::cout << bureaucrat5;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}