#include "../includes/ScavTrap.hpp"


ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) 
{
    _health = 100;
	_energy = 50;
    _attack = 20;
    std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
    if 	(_energy == 0) {
        std::cout << _name << " has no energy left to attack" << std::endl;
        return ;
    }
    if (_attack == 0) {
        std::cout << _name << " has no attack points to attack" << std::endl;
        return ;
    }
	_energy--;
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() 
{
    if (_health == 0) {
        std::cout << "ScavTrap " << _name << " is already destroyed and can't guard the gate!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode!" << std::endl;
}