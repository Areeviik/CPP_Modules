/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:21:30 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/14 09:35:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    type = _type;
}

Weapon::~Weapon()
{
    
}

const std::string& Weapon::getType()
{
    return (type);
}

void Weapon::setType(std::string _type)
{
    type = _type;
}