#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <iostream>
# include <cctype>
# include <string>
# include <iomanip>
# include <cstdlib>

class PhoneBook
{
	private:
		Contact _contacts[8];
		int _contactCount;
		int current_id;
	
	public:
	PhoneBook();
	~PhoneBook();
	void addContact();
	void searchContact();
};

#endif