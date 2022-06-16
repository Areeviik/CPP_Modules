/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:50:21 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/16 15:17:03 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen obj;
    std::string lvl[4]={"DEBUG", "INFO", "WARNING", "ERROR"};

    if (argc != 2)
        std::cout<<"\033[1;31mPlease enter one of these levels as parameter: DEBUG, INFO, WARNING, ERROR\033[0m"<<std::endl;
    for (int i = 0; i< 4; i++)
    {
        if (lvl[i] == argv[1])
        {
            obj.complain(lvl[i]);
            obj.complain(lvl[++i]);
        }
    }
    return 0;
}