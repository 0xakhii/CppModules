#include "phonebook.hpp"

int main(){
	PhoneBook phonebook;
	std::string command;
	std::cout <<BLUE<<"Welcome to the phonebook!" <<RESET<<std::endl;
	while(1){
		std::cout <<BLUE<< "Please enter a command: ADD, SEARCH or EXIT: " <<RESET;
		if (!getline(std::cin, command))
			break;
		if (command == "ADD")
			phonebook.AddContact();
		else if (command == "SEARCH"){
            phonebook.print();
			phonebook.SearchContact();
        }
		else if (command == "EXIT"){
			std::cout <<RED<<"Goodbye! All the saved contact are lost forever" <<RESET<<std::endl;
			break; 
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
}