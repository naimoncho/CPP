#include  "Zombie.hpp"

int main()
{
	Zombie *Zombie = newZombie("Alfred");;
	Zombie->announce();
	delete Zombie;
	randomChump("Alfred");
	return 0;
}