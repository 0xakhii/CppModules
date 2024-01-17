#include "Form.hpp"


int main(){
	try{
		Bureaucrat b1("b1", 1);
		Bureaucrat b2("b2", 150);
		Form f1("f1", 1, 1);
		Form f2("f2", 150, 150);
		std::cout << b1 << b2 << f1 << f2;
		b1.signForm(f1);
		b2.signForm(f2);
		b1.signForm(f2);
		f1.beSigned(b2);
	}
	catch(const std::exception& e){
		std::cout << e.what() << '\n';
	}
}