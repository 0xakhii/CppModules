#include "Form.hpp"

int main(){
	try{
		Bureaucrat b1("b1", 9);
		Form f1("f1", 10, 10);
		b1.signForm(f1);

		Bureaucrat b2("b2", 11);
		Form f2("f2", 10, 10);
		b2.signForm(f2);
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
}