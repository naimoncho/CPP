#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) 
{
    _health = 100;
    _energy = 100;
    _attack = 30;
    std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) 
{
    if (_energy == 0) {
        std::cout << _name << " has no energy left to attack" << std::endl;
        return ;
    }
    if (_attack == 0) {
        std::cout << _name << " has no attack points to attack" << std::endl;
        return ;
    }
    _energy--;
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing "
              << _attack << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() 
{
    if (_health == 0) {
        std::cout << "FragTrap " << _name << " is already destroyed and can't high five!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << _name << " is requesting a high five!" << std::endl;
}