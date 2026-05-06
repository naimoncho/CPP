#include "../includes/Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constrctor called" << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
	std::cout << "Animal copy constrctor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &copy)
		type = copy.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}