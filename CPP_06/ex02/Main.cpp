#include "Base.hpp"

int main(){
	Base* _base;
	_base = generate();
	identify(_base);
	identify(*_base);
	delete _base;
}