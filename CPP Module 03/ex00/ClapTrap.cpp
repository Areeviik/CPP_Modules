/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:10:32 by akhachat          #+#    #+#             */
/*   Updated: 2022/07/12 19:31:04 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout<<"Constructor called"<<std::endl;
    _name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap &oth)
{
    std::cout<<"Copy constructor called"<<std::endl;
    this->_name = oth._name;
    this->_hit_points = oth._hit_points;
    this->_energy_points = oth._energy_points;
    this->_attack_damage = oth._attack_damage;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"Destructor called"<<std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
    std::cout<<"ClapTrap copy assignment operator called"<<std::endl;
    
    this->_name = obj._name;
    this->_hit_points = obj._hit_points;
    this->_energy_points = obj._energy_points;
    this->_attack_damage = obj._attack_damage;
    return *this;
}

std::string ClapTrap::getName()
{
    return this->_name;
}

int ClapTrap::getHP()
{
    return this->_hit_points;
}

int ClapTrap::getEnergy()
{
    return this->_energy_points;
}

int ClapTrap::getAttack()
{
    return this->_attack_damage;
}

void ClapTrap::setHP(int hp)
{
    this->_hit_points = hp;
}

void ClapTrap::setEnergy(int energy)
{
    this->_energy_points = energy;
}

void ClapTrap::setAttack(int att)
{
    this->_attack_damage = att;
}

void ClapTrap::attack(const std::string & target)
{
    if (_energy_points > 0 && _hit_points > 0)
    {
        std::cout << "ClapTrap "<< _name << "attacks" << target;
        std::cout << ", causing "<< " points of damage!"<<std::endl;
        _energy_points--;
        _hit_points -= _attack_damage;
    }
    else
        std::cout << "Can't attack, there is no hit points or energy points\n";

}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hit_points -= amount;
    std::cout << "ClapTrap" << _name << "take ";
    std::cout << amount << "hit point of damages "<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit_points > 0 && _energy_points > 0)
    {
        std::cout <<"ClapTrap" << _name << "regained ";
        std::cout << amount << " hit points" << std::endl;
        _hit_points += amount;
        _energy_points--;
    }
    else
        std::cout << "Can't being repaired, cos there is no hit points or energy points\n";
}