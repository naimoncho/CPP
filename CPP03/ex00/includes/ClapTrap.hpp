#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

	private:
		std::string _name;
		unsigned int _health;
		unsigned int _energy;
		unsigned int _attack;
	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		~ClapTrap();

		void attack(const std::string& target);
		void  takeDamage(unsigned int amount);
		void beRepaired(unsigned int aomunt);
		
		std::string getName() const;
		unsigned int getHitPoints() const;
		unsigned int getEnergyPoints() const;
		unsigned int getAttackDamage() const;
};

#endif