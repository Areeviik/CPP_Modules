/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:45:32 by akhachat          #+#    #+#             */
/*   Updated: 2022/07/12 20:11:04 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ScavTrap.hpp"

class FragTrap:public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string _name);
        FragTrap(FragTrap& oth);
        ~FragTrap();
        FragTrap &FragTrap::operator=(FragTrap const &obj);
        void highFivesGuys(void);
};

#endif