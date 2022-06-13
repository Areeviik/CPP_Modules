/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:21:23 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/13 20:20:21 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
    name = _name;
    
    weapon = NULL;
}

HumanB::~HumanB()
{
    
}

void HumanB::attack()
{
    std::cout<<this->name;
    std::cout<<" attacks with their ";
    std::cout<<this->weapon<<std::endl;
}

void HumanB::setWeapon(Weapon &_w)
{
    this->weapon = &_w;
}
