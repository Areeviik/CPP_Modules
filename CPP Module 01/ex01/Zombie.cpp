/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:12:12 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/12 19:32:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

void Zombie::set_name(std::string n)
{
    this->name = n;
}

std::string Zombie::get_name() const
{
    return name;
}

void Zombie::announce(std::string name)
{
    std::cout<<name<<"\033[1;33m: BraiiiiiiinnnzzzZ...\033[0m"<<std::endl;
}

Zombie::~Zombie()
{
    std::cout<<name<<"\033[1;31m: Unfortunately died(((\033[0m"<<std::endl;
}
