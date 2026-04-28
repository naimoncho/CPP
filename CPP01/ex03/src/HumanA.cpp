#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"

HumanA::HumanA(const string_t name, Weapon &weapon) 
    : name(name), weapon(weapon) {}

void HumanA::attack() const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA() {
    std::cout << "HumanA :: " << name << " :: ha sido destruido" << std::endl;
}