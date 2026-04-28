#include "Zombie.hpp"

void randomChup(string_t name)
{
	Zombie *Zombie = newZombie(name);
	Zombie->announce();
	delete Zombie;
	return ;
}