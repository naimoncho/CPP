#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}
void Contact::setFirstName(std::string str)
{
	_firstName = str;
}

std::string Contact::getFirstName() const{
	return _firstName;
}

void Contact::setLastName(std::string str)
{
	_lastName = str;
}

std::string Contact::getLastName() const{
	return _lastName;
}

void Contact::setNickname(std::string str)
{
	_nickname = str;
}

std::string Contact::getNickname() const{
	return _nickname;
}

void Contact::setPhoneNumber(std::string str)
{
	_phoneNumber = str;
}

std::string Contact::getPhoneNumber() const{
	return _phoneNumber;
}

void Contact::setDarkestSecret(std::string str)
{
	_darkestSecret = str;
}

std::string Contact::getDarkestSecret() const{
	return _darkestSecret;
}