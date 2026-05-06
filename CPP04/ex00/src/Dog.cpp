#include "../includes/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constrctor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constrctor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &copy)
		type = copy.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof!" << std::endl;
}