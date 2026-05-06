#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constrctor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constrctor called" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = copy.ideas[i];
	}
	return *this;
}

void Brain::setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
	{
		return ideas[index];
	}
	return "";
}