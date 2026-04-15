#include "Phonebook.hpp"

int main(void)
{
	PhoneBook PhoneBook;
	string line;
	std::cout << "Welcome to PhoneBook!" << std::endl;

	while (1)
	{
		std::cout << "Type ADD, SEARCH or EXIT" << std::endl;

		if (!std::getline(std::cin, line))
        {
            std::cout << "\nExiting PhoneBook." << std::endl;
            break;
        }
		if (line == "ADD")
			PhoneBook.addContact();
		else if (line == "SEARCH")
			PhoneBook.searchContact();
		else if (line == "EXIT")
			return (0);
		else
			std::cout << "Invalid option" << std::endl;
	}
	return (0);
}