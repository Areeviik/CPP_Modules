/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:10:32 by akhachat          #+#    #+#             */
/*   Updated: 2022/07/04 20:10:33 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout<<"ClapTrap constructor called"<<std::endl;
    _name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap &oth)
{
    std::cout<<"ClapTrap copy constructor called"<<std::endl;
    this->_name = oth.getName();
    this->_hit_points = oth.getHP();
    this->_energy_points = oth.getEnergy();
    this->_attack_damage = oth.getAttack();
}

ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap destructor called"<<std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
    std::cout<<"ClapTrap copy assignment operator called"<<std::endl;
    this->_name = obj.getName();
    this->_hit_points = obj.getHP();
    this->_energy_points = obj.getEnergy();
    this->_attack_damage = obj.getAttack();
    return *this;
}

std::string ClapTrap::getName() const
{
    return this->_name;
}

int ClapTrap::getHP() const
{
    return this->_hit_points;
}

int ClapTrap::getEnergy() const
{
    return this->_energy_points;
}

int ClapTrap::getAttack() const
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
        std::cout << "ClapTrap "<< getName() << "attacks" << target;
        std::cout << ", causing "<< " points of damage!"<<std::endl;
        setEnergy(_energy_points - 1);
    }
    else
        std::cout << "Can't attack, there is no hit points or energy points\n";

}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hit_points -= amount;
    std::cout << "ClapTrap" << getName() << "take ";
    std::cout << amount << "hit point of damages "<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit_points > 0 && _energy_points > 0)
    {
        std::cout <<"ClapTram" << getName() << "regained ";
        std::cout << amount << " hit points" << std::endl;
        _hit_points + amount;
        setEnergy(_energy_points - 1);
    }
    else
        std::cout << "Can't being repaired, cos there is no hit points or energy points\n";
}