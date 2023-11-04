#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>

# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define RED "\033[1;31m"
# define RESET "\033[0m"
# define BOLD "\033[1m"

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

class PhoneBook{
	private:
		Contact contacts[8];
	public:
		void AddContact();
		void SearchContact();
		int	 Print();
};

#endif