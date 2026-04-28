#include "Zombie.hpp"

int main()
{
	int n = 2;
	Zombie *zombie = zombieHorde(n, "Alfred");
	for (int i = 0; i < n; i++)
	{
		std::cout << "Zombie :: " << i + 1 << " :: ";
		zombie[i].announce();
	}
	delete[] zombie;
	return 0;
}