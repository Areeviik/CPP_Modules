/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:46:27 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/13 15:44:44 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;

    i = 0;

    Zombie *newZombie = new Zombie[N];
    while (i < N)
    {
        newZombie[i].set_name(name);
        newZombie[i].announce(name);
        i++;
    }
    return (newZombie);
}