/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:21:30 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/13 20:05:56 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    this->type = _type;
}

Weapon::~Weapon()
{
    
}

std::string& Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(std::string _type)
{
    this->type = _type;
}