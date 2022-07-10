/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:10:37 by akhachat          #+#    #+#             */
/*   Updated: 2022/07/04 20:10:38 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap obj("Claptrappington");
    std::cout<<"Energy level of "<< obj.getName() << ": "<<obj.getEnergy()<<std::endl;
    obj.setEnergy(7);

}