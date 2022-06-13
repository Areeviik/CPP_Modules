/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:21:23 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/13 19:06:49 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
    name = _name;
    weapon = NULL;
}

void HumanB::attack()
{
    std::cout<<this->name;
    std::cout<<" attacks with their";
    std::cout<<this->weapon;
}

void HumanB::setWeapon(Weapon &_w)
{
    this->weapon = &_w;
}

void HumanB::attack()
{
    std::cout<<this->name;
    std::cout<<" attacks with their";
    std::cout<<this->weapon;
}