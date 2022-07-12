/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:11:21 by akhachat          #+#    #+#             */
/*   Updated: 2022/07/12 20:43:30 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout<<"DiamondTrap default constructor called"<<std::endl;
    this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{
    std::cout<<"DiamondTrap copy assignment operator called"<<std::endl;
    
    this->_name = obj._name;
    this->_hit_points = obj._hit_points;
    this->_energy_points = obj._energy_points;
    this->_attack_damage = obj._attack_damage;
    return *this;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->name = ClapTrap::_name + "_clap_name";
    this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;   
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<"DiamondTrap destructor is called"<<std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << " Name : " << _name;
	std::cout << " ClapTrap name :" << ClapTrap::_name << std::endl;
}