/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:50:37 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/16 14:50:37 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){}

Karen::~Karen(){}

void Karen::complain(std::string lvl)
{
    void (Karen::*lvlarr[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    std::string arr[4]={"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i <= 4)
    {
        if (lvl == arr[i])
            (this->*lvlarr[i])();
        i++;
    }   
}

void Karen::debug(void)
{
    std::cout<<"\033[1;31m[DEBUG]\033[0m"<<std::endl;
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
    info();
}

void Karen::info(void)
{
    std::cout<<"\033[1;31m[INFO]\033[0m"<<std::endl;
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
    warning();
}

void Karen::warning(void)
{
    std::cout<<"\033[1;31m[WARNING]\033[0m"<<std::endl;
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
    error();
}

void Karen::error(void)
{
    std::cout<<"\033[1;31m[ERROR]\033[0m"<<std::endl;
    std::cout<< "This is unacceptable! I want to speak to the manager now.\n";
}
