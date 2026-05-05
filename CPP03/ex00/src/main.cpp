#include "../includes/ClapTrap.hpp"

int main(void)
{
    // Creating ClapTrap instances with names
    std::cout << "Creating ClapTrap instances:" << std::endl;
    ClapTrap r2d2("R2D2");
    ClapTrap c3p0("C3PO");
    
    // Testing attack function
    std::cout << "\n--- Testing attack function ---" << std::endl;
    r2d2.attack("Battle Droid");
    c3p0.attack("Stormtrooper");
    
    // Testing takeDamage function
    std::cout << "\n--- Testing takeDamage function ---" << std::endl;
    r2d2.takeDamage(3);
    c3p0.takeDamage(12); // This should destroy C3PO (10 health - 12 damage)
    
    // Testing beRepaired function
    std::cout << "\n--- Testing beRepaired function ---" << std::endl;
    r2d2.beRepaired(2);
    c3p0.beRepaired(5); // This should fail as C3PO is destroyed
    
    // Testing energy depletion
    std::cout << "\n--- Testing energy depletion ---" << std::endl;
    // Let's deplete r2d2's energy points
    for (int i = 0; i < 8; ++i) // Already used 1 for attack and 1 for repair
    {
        std::cout << "Energy points left: " << r2d2.getEnergyPoints() << std::endl;
        r2d2.attack("Battle Droid");
    }
    
    // Now r2d2 should be out of energy
    std::cout << "\n--- Testing actions with no energy ---" << std::endl;
    r2d2.attack("Battle Droid"); // Should fail - no energy
    r2d2.beRepaired(5);         // Should fail - no energy
    
    return (0);
}