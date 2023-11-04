#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "Contacts.hpp"

# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define RED "\033[1;31m"
# define RESET "\033[0m"
# define BOLD "\033[1m"

class PhoneBook{
	private:
		Contact contacts[8];
	public:
		void AddContact();
		void SearchContact();
		int	 Print();
};

#endif