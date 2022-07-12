#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap:virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &oth);
        ~ScavTrap();
        ScavTrap& operator= (const ScavTrap& obj);
        void guardGate();
};

#endif