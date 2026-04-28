#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << "Zombie" << name << " : ha sido destruido" << std::endl;
}

Zombie::Zombie(string_t name) : name(name)
{
	std::cout << "Zombie" << name << " : ha sido creado" << std::endl;
}

void Zombie::announce()
{
	std::cout << "Zombie" << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}