/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:11:59 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/10 15:41:55 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << "\033[1;34m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[m" << std::endl;
    std::cout<<"\033[1;30mCreating zombies with Zombie function\033[0m"<<std::endl;
    Zombie("Jinx");
    Zombie("Victor");
    Zombie("Vi");
    std::cout << "\033[1;34m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[m" << std::endl;
    std::cout<<"\033[1;30mCreating zombies with newZombie\033[0m"<<std::endl;
    Zombie *z0 = newZombie("Groot");
    Zombie *z1 = newZombie("Loki");
    Zombie *z2 = newZombie("Pepper");
    std::cout << "\033[1;34m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[m" << std::endl;
    std::cout<<"\033[1;30mDeleting zombies\033[0m"<<std::endl;
    delete(z0);
    delete(z1);
    delete(z2);
    std::cout << "\033[1;34m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[m" << std::endl;
    std::cout<<"\033[1;30mCreating zombies with randomChump\033[0m"<<std::endl;
    randomChump("White walker");
    randomChump("Walder Frey");
    randomChump("Ramsay");
    std::cout << "\033[1;34m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[m" << std::endl;
}