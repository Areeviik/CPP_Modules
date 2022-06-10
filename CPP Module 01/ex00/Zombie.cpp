/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:12:12 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/10 15:39:28 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n)
{
    this->name = n;
    announce();
}

void Zombie::announce(void)
{
    std::cout<<this->name<<"\033[1;33m: BraiiiiiiinnnzzzZ...\033[0m"<<std::endl;
}

Zombie::~Zombie()
{
    std::cout<<this->name<<"\033[1;31m: Unfortunately died(((\033[0m"<<std::endl;
}
