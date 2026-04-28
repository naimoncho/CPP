#include "../includes/Weapon.hpp"
#include "../includes/HumanB.hpp"

HumanB::HumanB(const string_t& name) 
    : name(name) {}

HumanB::~HumanB() {
    std::cout << "HumanB :: " << this->name << " :: ha sido destruido" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
    weapon = weapon;
}

void HumanB::attack(void) const {

    if (this->weapon)
        std::cout << this->name << " attack with their " << weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon to attack " << std::endl;
}