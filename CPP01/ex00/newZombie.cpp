#include "Zombie.hpp"

Zombie* newZombie(string_t name)
{
	return new Zombie(name);
}