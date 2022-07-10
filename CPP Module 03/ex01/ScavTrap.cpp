#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
}

ScavTrap::ScavTrap(ScavTrap &other)
{
    this->_name = other.getName();
    this->_hit_points = other.getHP();
    this->_energy_points = other.getEnergy();
    this->_attack_damage = other.getAttack();
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTram " << getName() << "is now in Gate keeper mode"<<std::endl;
}