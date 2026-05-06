#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat default constrctor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constrctor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &copy)
		type = copy.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongMeooowww!" << std::endl;
}