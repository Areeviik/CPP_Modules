/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:21:19 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/13 20:18:44 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string _name,Weapon &_weapon): weapon(_weapon)
{
    this->name = _name;
}

HumanA::~HumanA()
{
    
}

void HumanA::attack()
{
    std::cout<<this->name;
    std::cout<<" attacks with their ";
    std::cout<<weapon<<std::endl;
}