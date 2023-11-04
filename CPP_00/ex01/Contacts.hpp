#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include "PhoneBook.hpp"

class Contact;
class Contact{
    private:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
	public:
		std::string	GetFirstName();
		std::string	GetLastName();
		std::string	GetNickname();
		std::string	GetPhoneNumber();
		std::string	GetDarkestSecret();
	
		void		SetFirstName(std::string str);
		void		SetLastName(std::string str);
		void		SetNickname(std::string str);
		void		SetPhoneNumber(std::string str);
		void		SetDarkestSecret(std::string str);

};

#endif