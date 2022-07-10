#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap:public FragTrap, public ScavTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap &oth);
        ~DiamondTrap();
        void whoAmI();
};

#endif