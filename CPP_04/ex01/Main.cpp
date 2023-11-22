#include "Dog.hpp"
#include "Cat.hpp"

int main(){
	Animal*		j = new Dog();
	Animal*		i = new Cat();
	Animal*		k[50];
	Animal*		l[50];

	for (int i = 0; i < 50; i++){
		k[i] = new Dog();
	}
	for (int i = 0; i < 50; i++){
		l[i] = new Cat();
	}
	for (int i = 0; i < 50; i++){
		delete k[i];
	}
	for (int i = 0; i < 50; i++){
		delete l[i];
	}
	delete j;
	delete i;
	return 0;
}
