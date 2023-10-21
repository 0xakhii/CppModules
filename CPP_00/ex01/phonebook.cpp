#include "phonebook.hpp"

void    add(Contact *contact, Phonebook *phonebook)
{
    std::cout << "Please enter the first name: ";
    std::cin >> contact->FirstName;
    if (contact->FirstName.empty())
        std::cout << "First name cannot be empty" << std::endl;
    std::cout << "Please enter the last name: ";
    std::cin >> contact->LastName;
    if (contact->LastName.empty())
        std::cout << "Last name cannot be empty" << std::endl;
    std::cout << "Please enter the Nickname: ";
    std::cin >> contact->Nickname;
    if (contact->Nickname.empty())
        std::cout << "Nickname cannot be empty" << std::endl;
    std::cout << "Please enter the phone number: ";
    std::cin >> contact->PhoneNumber;
    if (contact->PhoneNumber.empty())
        std::cout << "Phone Number cannot be empty" << std::endl;
    std::cout << "Please enter your darkest secret: ";
    std::cin >> contact->DarkestSercret;
    if (contact->DarkestSercret.empty())
        std::cout << "DarkestSercret cannot be empty" << std::endl;
    std::cout << "\033[1;32mContact added!\033[0;m" << std::endl;
    phonebook->contacts[contact->index] = *contact;
    contact->index++;
}

void    print(Phonebook *Phonebook)
{
    std::cout << "     Index|First name| Last name|  Nickname|" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        if (!Phonebook->contacts[i].FirstName.empty()){
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << Phonebook->contacts[i].FirstName << "|";
        std::cout << std::setw(10) << Phonebook->contacts[i].LastName << "|";
        std::cout << std::setw(10) << Phonebook->contacts[i].Nickname << "|";
        std::cout << std::setw(10) << std::endl;
        }
    }
}

void    search(Phonebook *phonebook)
{
    int index;
    print(phonebook);
    std::cout << "Please enter the index of the contact you want to see: ";
    std::cin >> index;
    if (std::cin.eof())
        exit (0);
    if (index < 0 || index > 7)
        std::cout << "Invalid index" << std::endl;
    else
    {
        std::cout << "First name: " << phonebook->contacts[index].FirstName << std::endl;
        std::cout << "Last name: " << phonebook->contacts[index].LastName << std::endl;
        std::cout << "Nickname: " << phonebook->contacts[index].Nickname << std::endl;
        std::cout << "Phone number: " << phonebook->contacts[index].PhoneNumber << std::endl;
        std::cout << "Darkest secret: " << phonebook->contacts[index].DarkestSercret << std::endl;
    }
}

int main()
{
    Phonebook phonebook;
    Contact contact;
    std::string command;
    std::cout << "\033[1;32mWelcome to the phonebook!\033[0;0m" << std::endl;
    while(1)
    {
        std::cout << "Please enter a command: ADD, SEARCH or EXIT" << std::endl;
        std::cin >> command;
        if (command.empty() || std::cin.eof())
            break;
        if (command == "ADD")
            add(&contact, &phonebook);
        else if (command == "SEARCH")
            search(&phonebook);
        else if (command == "EXIT")
        {
            std::cout << "\033[1;31mGoodbye! All the saved contact are lost forever" << std::endl;
            break; 
        }
        else
        {
            std::cout << "Invalid command" << std::endl;
        }
    }
}