/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:44:48 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/13 15:17:23 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int num;
    std::string name;
    std::cout<<"How many zombies do you want?"<<std::endl;
    std::cin>>num;
    std::cout<<"What will be zombies name?"<<std::endl;
    std::cin>>name;
    Zombie *Horde = zombieHorde(num, name);
    delete [] Horde;
    return (0);
}