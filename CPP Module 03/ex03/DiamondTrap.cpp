#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout<<"DiamondTrap default constructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->_name = name;
    this->_hit_points = FragTrap::_hit_points;
    
}