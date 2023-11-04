#include <iostream>

int main(){
    std::string Brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &Brain;
    std::string &stringREF = Brain;

    std::cout << "Brain string Address:    " << &Brain << std::endl;
    std::cout << "Brain stringPTR Address: " << stringPTR << std::endl;
    std::cout << "Brain stringREF Address: " << &stringREF << std::endl;
    std::cout << "Brain string:    " << Brain << std::endl;
    std::cout << "Brain stringPTR: " << *stringPTR << std::endl;
    std::cout << "Brain stringREF: " << stringREF << std::endl;
}