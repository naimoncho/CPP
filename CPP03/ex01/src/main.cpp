#include "../includes/ScavTrap.hpp"

int main(void)
{
    std::cout << "=== Creating ClapTrap ===\n";
    ClapTrap claptrap("C1");
    
    std::cout << "\n=== Creating ScavTrap ===\n";
    ScavTrap scavtrap("S1");
    
    std::cout << "\n=== Testing attack functions ===\n";
    claptrap.attack("Target1");
    scavtrap.attack("Target2");
    
    std::cout << "\n=== Testing takeDamage ===\n";
    claptrap.takeDamage(5);
    scavtrap.takeDamage(30);
    
    std::cout << "\n=== Testing beRepaired ===\n";
    claptrap.beRepaired(3);
    scavtrap.beRepaired(10);
    
    std::cout << "\n=== Testing guardGate ===\n";
    scavtrap.guardGate();
    
    std::cout << "\n=== End of program ===\n";
    return (0);
}