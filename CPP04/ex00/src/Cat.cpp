#include "../includes/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constrctor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constrctor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &copy)
		type = copy.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meooowww!" << std::endl;
}
