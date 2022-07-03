/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:21:23 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/14 09:36:03 by marvin           ###   ########.fr       */
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
    std::cout<<name;
    std::cout<<" attacks with their ";
    std::cout<<weapon->getType()<<std::endl;
}

void HumanB::setWeapon(Weapon &_w)
{
    weapon = &_w;
}
