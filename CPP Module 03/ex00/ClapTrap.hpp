/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:10:32 by akhachat          #+#    #+#             */
/*   Updated: 2022/07/12 19:17:38 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;
        ClapTrap();
    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &oth);
        ~ClapTrap();
        ClapTrap& operator= (const ClapTrap& obj);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName();
        int getHP();
        int getEnergy();
        int getAttack();
        void setHP(int hp);
        void setEnergy(int energy);
        void setAttack(int att);
};

#endif