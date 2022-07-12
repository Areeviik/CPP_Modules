/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:10:52 by akhachat          #+#    #+#             */
/*   Updated: 2022/07/12 19:54:47 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void ) {
    ClapTrap obj("Claptrappington");
    std::cout<<"Energy level of "<< obj.getName() << ": "<<obj.getEnergy()<<std::endl;
    obj.setEnergy(7);
    ScavTrap obj1("Juan Pablo");
    std::cout<<"Energy level of "<< obj1.getName() << ": "<<obj1.getEnergy()<<std::endl;
    obj1.setEnergy(11);
    FragTrap obj2("Sasuke");
    std::cout<<"Energy level of "<< obj1.getName() << ": "<<obj1.getEnergy()<<std::endl;
    obj1.guardGate();
    obj2.highFivesGuys();
    return 0;
}