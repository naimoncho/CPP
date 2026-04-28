#include "Zombie.hpp"

void Zombie::setname(string_t name)
{
	this->name = name;
}

Zombie* zombieHorde(int n, string_t name)
{
	Zombie *zombie = new Zombie[n];
	for (int i = 0 < n; i++;)
		zombie[i].setname(name);
	return(zombie);
}