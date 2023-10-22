#include "phonebook.hpp"

int	check_digit(std::string str){
	for (int i = 0; i < (int)str.length(); i++)
		if (!isdigit(str[i]))
			return (0);
	return (1);
}

int	check_print(std::string str){
	for (int i = 0; i < (int)str.length(); i++)
		if (!isprint(str[i]))
			return (0);
	return (1);
}

void    add(Contact *contact, Phonebook *phonebook){
	if (contact->index == 8)
		contact->index = 0;
	for (int i = 0; i < 8; i++){
		if (phonebook->contacts[contact->index].FirstName.empty()){
			std::cout <<BOLD<<"Please enter the contact's First Name: " << RESET;
			if (!getline(std::cin, contact->FirstName))
				exit (0);
			if (!check_print(contact->FirstName) || contact->FirstName.empty()){
				contact->FirstName.clear();
				std::cout <<RED<< "Invalid First name" <<RESET<<std::endl;
			}
		}
		else if (phonebook->contacts[contact->index].LastName.empty()){
			std::cout <<BOLD<<"Please enter the contact's Last Name: " << RESET;
			if (!getline(std::cin, contact->LastName))
				exit (0);
			if (!check_print(contact->LastName) || contact->LastName.empty()){
				contact->LastName.clear();
				std::cout <<RED<< "Invalid Last name" <<RESET<<std::endl;
			}
		}
		else if (phonebook->contacts[contact->index].Nickname.empty()){
			std::cout <<BOLD<<"Please enter the contact's Nickname: " << RESET;
			if (!getline(std::cin, contact->Nickname))
				exit (0);
			if (!check_print(contact->Nickname) || contact->Nickname.empty()){
				contact->Nickname.clear();
				std::cout <<RED<< "Invalid Nickname" <<RESET<<std::endl;
			}
		}
		else if (phonebook->contacts[contact->index].PhoneNumber.empty()){
			std::cout <<BOLD<<"Please enter the contact's Phone Number: " << RESET;
			if (!getline(std::cin, contact->PhoneNumber))
				exit (0);
			if (!check_print(contact->PhoneNumber) || contact->PhoneNumber.empty()
				|| !check_digit(contact->PhoneNumber)){
				contact->PhoneNumber.clear();
				std::cout <<RED<< "Invalid Phone Number" <<RESET<<std::endl;
			}
		}
		else if (phonebook->contacts[contact->index].DarkestSercret.empty()){
			std::cout << BOLD << "Please enter the contact's Darkest Secret: " << RESET;
			if (!getline(std::cin, contact->DarkestSercret))
				exit (0);
			if (!check_print(contact->DarkestSercret) || contact->DarkestSercret.empty()){
				contact->DarkestSercret.clear();
				std::cout <<RED<< "Invalid Darkest Secret" <<RESET<<std::endl;
			}
		}
		phonebook->contacts[contact->index] = *contact;
	}
	contact->index++;
}

void    print(Phonebook *Phonebook){
	std::cout << "     Index|First name| Last name|  Nickname|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (!Phonebook->contacts[i].FirstName.empty()){
		std::cout << std::setw(10) << i + 1 << "|";
		if (Phonebook->contacts[i].FirstName.length() > 10)
			std::cout << std::setw(10) << Phonebook->contacts[i].FirstName.substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << Phonebook->contacts[i].FirstName << "|";
		if (Phonebook->contacts[i].LastName.length() > 10)
			std::cout << std::setw(10) << Phonebook->contacts[i].LastName.substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << Phonebook->contacts[i].LastName << "|";
		if (Phonebook->contacts[i].Nickname.length() > 10)
			std::cout << std::setw(10) << Phonebook->contacts[i].Nickname.substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << Phonebook->contacts[i].Nickname << "|";
		std::cout << std::setw(10) << std::endl;
		}
	}
}

void    search(Phonebook *phonebook){
	std::string command;
	while(1){
		std::cout << GREEN << "Enter the index of the contact you want to see or type 'PRINT' to see all the contacts: " << RESET;
		if (!getline(std::cin, command))
			exit(0);
		if (command == "PRINT"){
			print(phonebook);
			break;
		}
		else if (isdigit(command[0])){
			if (atoi(command.c_str()) > 8 || atoi(command.c_str()) < 1)
				std::cout << "Invalid index" << std::endl;
			else if (phonebook->contacts[atoi(command.c_str()) - 1].FirstName.empty())
				std::cout<<RED << "No contact at this index" << RESET<< std::endl;
			else{
				std::cout << "First Name: " << phonebook->contacts[atoi(command.c_str()) - 1].FirstName << std::endl;
				std::cout << "Last Name: " << phonebook->contacts[atoi(command.c_str()) - 1].LastName << std::endl;
				std::cout << "Nickname: " << phonebook->contacts[atoi(command.c_str()) - 1].Nickname << std::endl;
				std::cout << "Phone Number: " << phonebook->contacts[atoi(command.c_str()) - 1].PhoneNumber << std::endl;
				std::cout << "Darkest Secret: " << phonebook->contacts[atoi(command.c_str()) - 1].DarkestSercret << std::endl;
				break;
			}
		}
	}
}

std::string	to_upper(std::string str){
	for (int i = 0; i < (int)str.length(); i++)
		str[i] = toupper(str[i]);
	return (str);
}

int main(){
	Phonebook phonebook;
	Contact contact;
	std::string command;
	std::cout <<BLUE<<"Welcome to the phonebook!" <<RESET<<std::endl;
	while(1){
		std::cout <<BLUE<< "Please enter a command: ADD, SEARCH or EXIT: " <<RESET;
		if (!getline(std::cin, command))
			break;
		command = to_upper(command);
		if (command == "ADD")
			add(&contact, &phonebook);
		else if (command == "SEARCH")
			search(&phonebook);
		else if (command == "EXIT"){
			std::cout << "Goodbye! All the saved contact are lost forever" << std::endl;
			break; 
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
}