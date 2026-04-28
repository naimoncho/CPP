#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

typedef std::string string_t;

class Zombie {
	private:
		string_t name;
	public:
		~Zombie(void);
		Zombie();
		Zombie(string_t name);
		void announce(void);
		void setname(string_t name);
};

Zombie* zombieHorde(int n, string_t name);

#endif