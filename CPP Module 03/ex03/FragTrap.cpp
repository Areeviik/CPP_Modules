/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:45:28 by akhachat          #+#    #+#             */
/*   Updated: 2022/07/12 20:09:40 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called "<<std::endl;
    this->_name = "FragTrap";
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
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
    this->_name = oth._name;
	this->_hit_points = oth._hit_points;
    this->_energy_points = oth._energy_points;
    this->_attack_damage = oth._attack_damage;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
    std::cout<<"FragTrap copy assignment operator called"<<std::endl;
    this->_name = obj._name;
    this->_hit_points = obj._hit_points;
    this->_energy_points = obj._energy_points;
    this->_attack_damage = obj._attack_damage;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap destructor called"<<std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap "<< _name <<"High five" << std::endl;
}
