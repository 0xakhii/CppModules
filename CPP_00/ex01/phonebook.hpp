#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>

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
};

class Phonebook{
	public:
		Contact contacts[8];
};

#endif