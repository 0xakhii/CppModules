#include "Base.hpp"

Base::~Base(){}

Base* generate(){
	srand(time(0));
	int i = rand() % 3;
	switch (i) {
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void identify(Base* p){
	if (dynamic_cast<C*>(p))
		std::cout << "the actual type of the object pointed to by p is : (C)" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "the actual type of the object pointed to by p is : (B)" << std::endl;
	else if (dynamic_cast<A*>(p))
		std::cout << "the actual type of the object pointed to by p is : (A)" << std::endl;
	else
		std::cout << "p is NULL" << std::endl;
}

void identify(Base& p){
	try{
		dynamic_cast<C&>(p);
		std::cout << "the actual type of the object pointed to by p is : (C)" << std::endl; 
	}
	catch(std::exception &e){
		try{
			dynamic_cast<B&>(p);
			std::cout << "the actual type of the object pointed to by p is : (B)" << std::endl;
		}
		catch(std::exception &e){
			try{
				dynamic_cast<A&>(p);
				std::cout << "the actual type of the object pointed to by p is : (A)" << std::endl;
			}
			catch(std::exception &e){
				std::cout << e.what() << std::endl;
			}
		}
	}
}