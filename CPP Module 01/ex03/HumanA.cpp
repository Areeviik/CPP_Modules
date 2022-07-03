/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:21:19 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/14 09:37:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string _name,Weapon &_weapon): name(_name), weapon(_weapon) {}


HumanA::~HumanA()
{
    
}

void HumanA::attack()
{
    std::cout<<name;
    std::cout<<" attacks with their ";
    std::cout<<weapon.getType()<<std::endl;
}