#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : _name(name), _health(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap" << _name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClaptTrap" << _name << " Destrcutor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy == 0)
	{
		std::cout << _name << " has no energy left to attack" << std::endl;
		return ;
	}
	if (_attack == 0)
	{
		std::cout << _name << " has no attack points to attack" << std::endl;
		return ;
	}
	_energy--;
	std::cout << "ClaptTrap" << _name << " attacks " << target << ", causing" << _attack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    if (_health == 0) {
        std::cout << "ClapTrap " << _name << " is already destroyed and can't take more damage!" << std::endl;
        return;
    }
    
    if (amount >= _health) {
        _health = 0;
        std::cout << "ClapTrap " << _name << " takes " << amount 
                  << " points of damage and is destroyed!" << std::endl;
    } else {
        _health -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount 
                  << " points of damage! Hit points remaining: " << _health << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (_energy == 0) {
        std::cout << _name << " has no energy left to repair itself" << std::endl;
        return ;
    }
    if (_health == 0) {
        std::cout << "ClapTrap " << _name << " has no hit points left to repair itself!" << std::endl;
        return;
    }
    
    _energy--;
    _health += amount;
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount 
              << " hit points! Hit points now: " << _health << std::endl;
}

std::string ClapTrap::getName() const {
    return _name;
}

unsigned int ClapTrap::getHitPoints() const {
    return _health;
}

unsigned int ClapTrap::getEnergyPoints() const {
    return _energy;
}

unsigned int ClapTrap::getAttackDamage() const {
    return _attack;
}