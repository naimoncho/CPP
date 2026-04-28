#include "../includes/Weapon.hpp"

Weapon::Weapon(string_t type) : type(type) {}

Weapon::~Weapon() {
    std::cout << "Weapon ha sido destruido" << std::endl;
}

const string_t& Weapon::getType(void) const {
    return this->type;
}

void Weapon::setType(string_t newType){
    this->type = newType;
}
