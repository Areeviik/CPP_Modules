/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:46:27 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/10 16:07:22 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;

    i = 0;

    Zombie *newZombie = new Zombie(name);
    while (i < N)
    {
        newZombie[i].announce();
        i++;
    }
    return (newZombie);
}