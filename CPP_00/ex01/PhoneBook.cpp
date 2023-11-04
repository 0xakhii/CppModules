#include "PhoneBook.hpp"
int id = 0;
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

void    PhoneBook::AddContact(){
	if (id == 8)
		id = 0;
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
	while(1){
		if (FirstName.empty()){
			std::cout <<BOLD<<"Please enter the contact's First Name: " << RESET;
			if (!getline(std::cin, FirstName))
				exit (0);
			if (!check_print(FirstName) || FirstName.empty()){
				FirstName.clear();
				std::cout <<RED<< "Invalid First name" <<RESET<<std::endl;
			}
			else
				contacts[id].SetFirstName(FirstName);
		}
		else if (LastName.empty()){
			std::cout <<BOLD<<"Please enter the contact's Last Name: " << RESET;
			if (!getline(std::cin, LastName))
				exit (0);
			if (!check_print(LastName) || LastName.empty()){
				LastName.clear();
				std::cout <<RED<< "Invalid Last name" <<RESET<<std::endl;
			}
			else
				contacts[id].SetLastName(LastName);
		}
		else if (Nickname.empty()){
			std::cout <<BOLD<<"Please enter the contact's Nickname: " << RESET;
			if (!getline(std::cin, Nickname))
				exit (0);
			if (!check_print(Nickname) || Nickname.empty()){
				Nickname.clear();
				std::cout <<RED<< "Invalid Nickname" <<RESET<<std::endl;
			}
			else
				contacts[id].SetNickname(Nickname);
		}
		else if (PhoneNumber.empty()){
			std::cout <<BOLD<<"Please enter the contact's Phone Number: " << RESET;
			if (!getline(std::cin, PhoneNumber))
				exit (0);
			if (!check_print(PhoneNumber) || PhoneNumber.empty()
				|| !check_digit(PhoneNumber)){
				PhoneNumber.clear();
				std::cout <<RED<< "Invalid Phone Number" <<RESET<<std::endl;
			}
			else
				contacts[id].SetPhoneNumber(PhoneNumber);
		}
		else if (DarkestSecret.empty()){
			std::cout << BOLD << "Please enter the contact's Darkest Secret: " << RESET;
			if (!getline(std::cin, DarkestSecret))
				exit (0);
			if (!check_print(DarkestSecret) || DarkestSecret.empty()){
				DarkestSecret.clear();
				std::cout <<RED<< "Invalid Darkest Secret" <<RESET<<std::endl;
			}
			else
				contacts[id].SetDarkestSecret(DarkestSecret);
		}
		if (!DarkestSecret.empty()
			&& !FirstName.empty() && !LastName.empty()
			&& !PhoneNumber.empty() && !Nickname.empty()){
			std::cout << GREEN << "Contact added successfully" << RESET << std::endl;
			id++;
			break;
		}
	}
}

int    PhoneBook::Print(){
	if (contacts[0].GetFirstName().empty()){
		std::cout <<YELLOW<< "No contact to print!!! Use \"ADD\" command to save a new contact " <<RESET<< std::endl;
		return 1;
	}
	else
		std::cout << "     index|First name| Last name|  Nickname|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (!contacts[i].GetFirstName().empty()){
			std::cout << std::setw(10) << i + 1 << "|";
			if (contacts[i].GetFirstName().length() > 10)
				std::cout << std::setw(10) << contacts[i].GetFirstName().substr(0, 9) + "." << "|";
			else
				std::cout << std::setw(10) << contacts[i].GetFirstName() << "|";
			if (contacts[i].GetLastName().length() > 10)
				std::cout << std::setw(10) << contacts[i].GetLastName().substr(0, 9) + "." << "|";
			else
				std::cout << std::setw(10) << contacts[i].GetLastName() << "|";
			if (contacts[i].GetNickname().length() > 10)
				std::cout << std::setw(10) << contacts[i].GetNickname().substr(0, 9) + "." << "|";
			else
				std::cout << std::setw(10) << contacts[i].GetNickname() << "|";
			std::cout << std::endl;
		}
	}
	return 0;
}

void    PhoneBook::SearchContact(){
	std::string index;
	if (Print())
		return ;
	while(1){
		std::cout<<GREEN<< "Please enter the index of the contact you want to see: "<<RESET;
		if (!getline(std::cin, index))
			exit(0);
		else if (isdigit(index[0]) && index.length() == 1 && isprint(index[0])){
			if (atoi(index.c_str()) > 8 || atoi(index.c_str()) < 1){
				std::cout << "Invalid index" << std::endl;
				break;
			}
			else if (contacts[atoi(index.c_str()) - 1].GetFirstName().empty()){
				std::cout<<RED << "No contact at this id" << RESET<< std::endl;
				break;
			}
			else{
				std::cout << "First Name: " << contacts[atoi(index.c_str()) - 1].GetFirstName() << std::endl;
				std::cout << "Last Name: " << contacts[atoi(index.c_str()) - 1].GetLastName() << std::endl;
				std::cout << "Nickname: " << contacts[atoi(index.c_str()) - 1].GetNickname() << std::endl;
				std::cout << "Phone Number: " << contacts[atoi(index.c_str()) - 1].GetPhoneNumber() << std::endl;
				std::cout << "Darkest Secret: " << contacts[atoi(index.c_str()) - 1].GetDarkestSecret() << std::endl;
				break;
			}
		}
		else{
			std::cout << "Invalid index" << std::endl;
			break;
		}
	}
}
