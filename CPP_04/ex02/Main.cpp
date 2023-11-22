#include "Dog.hpp"
#include "Cat.hpp"

int main(){
	Animal*		j = new Dog();
	Animal*		i = new Cat();
	delete j;
	delete i;
	return 0;
}
