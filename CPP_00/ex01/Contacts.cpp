#include "phonebook.hpp"

void Contact::SetFirstName(std::string FirstName) {
    this->FirstName = FirstName;
}

std::string Contact::GetFirstName() const {
    return FirstName;
}

void Contact::SetLastName(std::string LastName) {
    this->LastName = LastName;
}

std::string Contact::GetLastName() const {
    return LastName;
}

void Contact::SetNickname(std::string Nickname) {
    this->Nickname = Nickname;
}

std::string Contact::GetNickname() const {
    return Nickname;
}

void Contact::SetPhoneNumber(std::string PhoneNumber) {
    this->PhoneNumber = PhoneNumber;
}

std::string Contact::GetPhoneNumber() const {
    return PhoneNumber;
}

void Contact::SetDarkestSecret(std::string DarkestSecret) {
    this->DarkestSecret = DarkestSecret;
}

std::string Contact::GetDarkestSecret() const {
    return DarkestSecret;
}

