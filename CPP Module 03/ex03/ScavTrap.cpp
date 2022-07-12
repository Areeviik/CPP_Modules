#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap &other)
{
    this->_name = other.getName();
    this->_hit_points = other.getHP();
    this->_energy_points = other.getEnergy();
    this->_attack_damage = other.getAttack();
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
    std::cout<<"ScavTrap copy assignment operator called"<<std::endl;
    this->_name = obj._name;
    this->_hit_points = obj._hit_points;
    this->_energy_points = obj._energy_points;
    this->_attack_damage = obj._attack_damage;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTram " << getName() << "is now in Gate keeper mode"<<std::endl;
}