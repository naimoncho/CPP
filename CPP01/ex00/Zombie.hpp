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
		Zombie(string_t n);
		void announce( void );
};

Zombie* newZombie(string_t name);
void randomChump(string_t name);

#endif