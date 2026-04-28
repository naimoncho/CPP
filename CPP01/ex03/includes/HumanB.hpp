#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>

typedef std::string string_t;

class HumanB {
private:

    string_t name;
    Weapon* weapon;

public:

    HumanB(const string_t& name);
    ~HumanB();
    void setWeapon(Weapon& weapon);
    void attack() const;
};

#endif