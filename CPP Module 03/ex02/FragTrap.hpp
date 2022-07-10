#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ScavTrap.hpp"

class FragTrap:public ScavTrap
{
    public:
        FragTrap();
        FragTrap(std::string _name);
        FragTrap(FragTrap& oth);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif