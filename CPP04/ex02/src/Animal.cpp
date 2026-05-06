#include "../includes/AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "AAnimal default constrctor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) : type(copy.type)
{
	std::cout << "AAnimal copy constrctor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &copy)
{
	std::cout << "AAnimal assignment operator called" << std::endl;
	if (this != &copy)
		type = copy.type;
	return *this;
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal sound" << std::endl;
}

std::string AAnimal::getType() const
{
	return type;
}