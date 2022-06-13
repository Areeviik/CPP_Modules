/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:12:12 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/13 15:47:50 by akhachat         ###   ########.fr       */
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
    return this->name;
}

void Zombie::announce(std::string name)
{
    std::cout<<name<<"\033[1;33m: BraiiiiiiinnnzzzZ...\033[0m"<<std::endl;
}

Zombie::~Zombie()
{
    std::cout<<this->name<<"\033[1;31m: Unfortunately died(((\033[0m"<<std::endl;
}
