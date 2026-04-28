#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

typedef std::string string_t;

class HumanA {
private:

    string_t name;
    Weapon& weapon;

public:

    HumanA(string_t name, Weapon& weapon);
    ~HumanA();
    void attack() const;

}; 

#endif