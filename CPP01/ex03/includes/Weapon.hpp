#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

typedef std::string string_t;

class Weapon {
private:

    string_t type;

public:

    ~Weapon(void);
    Weapon(string_t type);
    const string_t& getType() const;
    void setType(string_t newType);

};

#endif