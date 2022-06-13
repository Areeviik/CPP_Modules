/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:21:19 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/13 17:58:59 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string _name,Weapon &_weapon)
{
    this->name = _name;
    this->weapon = &_weapon;
}


void HumanA::attack()
{
    std::cout<<this->name;
    std::cout<<" attacks with their";
    std::cout<<this->weapon;
}