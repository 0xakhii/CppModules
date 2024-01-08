#include "Form.hpp"

int main(){
	Form form;
	std::cout << form;
	try{
		Form form1("hamid", 1, 10);
		std::cout << form1;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form form1("howa", 151, 0);
		std::cout << form1;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}