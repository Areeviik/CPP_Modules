/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:10:52 by akhachat          #+#    #+#             */
/*   Updated: 2022/07/12 20:20:44 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	DiamondTrap test("Tam");
	std::cout << "HP : " << test.getHP() << std::endl;
	std::cout << "Energy: " << test.getEnergy() << std::endl;
	std::cout << "Attack : " << test.getAttack() << std::endl;

	FragTrap test2("Fraggie");
	std::cout << "FragTrap hp : " << test2.getHP() << std::endl;
	std::cout << "DiamondTrap hp : " << test.getHP() << std::endl;
	std::cout << "FragTrap attack : " << test2.getAttack() << std::endl;
	std::cout << "DiamondTrap attack : " << test.getAttack() << std::endl;
	
	ScavTrap test3("Shahen");
	std::cout << "ScavTrap energy : " << test3.getEnergy() << std::endl;
	std::cout << "DiamondTrap energy : " << test.getEnergy() << std::endl;

	std::cout << "Testing whoami function" << std::endl;
	test.whoAmI();
	std::cout << "Testing attack function" << std::endl;
	test.attack("nofantasy");
}