#include "Phonebook.hpp"

PhoneBook::PhoneBook() : current_id(0), _contactCount(0)
{

}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::addContact()
{
	string firstName;
	string lastName;
	string nikcname;
	string phone_number;
	string darkest_secret;

	if (this->current_id == 8)
	{
		this->current_id = 0;
	}
	std::cout << "Type a name:" << std::endl;
	std::getline(std::cin, firstName);
	std::cout << "Type a last name:" << std::endl;
	std::getline(std::cin, lastName);	
	std::cout << "Type a nickname:" << std::endl;
	std::getline(std::cin, nikcname);	
	std::cout << "Type a phone number:" << std::endl;
	std::getline(std::cin, phone_number);	
	std::cout << "Type a dark secret:" << std::endl;
	std::getline(std::cin, darkest_secret);
	if (firstName.empty() || lastName.empty () || nikcname.empty()
		|| phone_number.empty() ||  darkest_secret.empty())
	{
		std::cout << "Can't save the contact, please fill all fields" << std::endl;
	}
	else
	{
		this->_contacts[this->current_id].setFirstName(firstName);
		this->_contacts[this->current_id].setLastName(lastName);
		this->_contacts[this->current_id].setNickname(nikcname);
		this->_contacts[this->current_id].setPhoneNumber(phone_number);
		this->_contacts[this->current_id].setDarkestSecret(darkest_secret);
		this->current_id++;
		std::cout << "The contact has been saved succesfully" << std::endl;
		if (_contactCount < 8)
			_contactCount++;
	}
}

void PhoneBook::searchContact()
{
	int i = 0;
	string str_index;
	string firstName;
	string lastName;
	string nickname;
	int index;

	if (this->_contactCount == 0)
	{
		std::cout << "Not contacts available" << std::endl;
		return ;
	}
	std::cout << std::setw(5) << "Index" << "|";
	std::cout << std::setw(10) << "Firstname" << "|";
	std::cout << std::setw(10) << "Lastname" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	while (i < this->_contactCount)
	{
		firstName = this->_contacts[i].getFirstName();
		lastName = this->_contacts[i].getLastName();
		nickname= this->_contacts[i].getNickname();
		if (firstName.length() > 9)
			firstName = firstName.substr(0, 9) + ".";
		if (lastName.length() > 9)
			lastName = lastName.substr(0, 9) + ".";
		if (nickname.length() > 9)
			nickname = nickname.substr(0, 9) + ".";
		std::cout << std::setw(5) << i << "|";
		std::cout << std::setw(10) << firstName << "|";
		std::cout << std::setw(10) << lastName << "|";
		std::cout << std::setw(10) << nickname << "|";
		std::cout << std::endl;
		i++;
	}
	std::cout << "Type index for more details " << std::endl;
	std::getline(std::cin, str_index);
	index = atoi(str_index.c_str());
	if ((index == 0 && str_index[0] != '0') || (index > 7 || index < 0)) 
	{
		std::cout << "Please, enter a valid digit" << std::endl;
		return ;
	}
	else if (index >= this->_contactCount)
	{
		std::cout << "Contact not found" << std::endl;
		return ;
	}
	else
	{
		std::cout << "Firstname: " << this->_contacts[index].getFirstName() << std::endl;
		std::cout << "Lastname: " << this->_contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << this->_contacts[index].getNickname() << std::endl;
		std::cout << "Phone number: " << this->_contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
	}
}