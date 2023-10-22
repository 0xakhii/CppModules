#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>

# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define RED "\033[1;31m"
# define RESET "\033[0m"
# define BOLD "\033[1m"

class Contact{
    public:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSercret;
        int			index;
		Contact(){
			index = 0;
			this->FirstName = "";
			this->LastName = "";
			this->Nickname = "";
			this->PhoneNumber = "";
			this->DarkestSercret = "";
		}
		~Contact(){}
};

class Phonebook{
	public:
		Contact contacts[8];
};

#endif