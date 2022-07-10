#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called "<<std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout<<"Frag Trap constructor called"<<std::endl;
    this->_name = name;
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::FragTrap(FragTrap &oth)
{
    std::cout << "FragTrap copy constructor called"<<std::endl;
    this->_name = oth.getName();
	this->_hit_points = oth.getHP();
    this->_energy_points = oth.getEnergy();
    this->_attack_damage = oth.getAttack();
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap destructor called"<<std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap "<<getName() <<"High five" << std::endl;
}
