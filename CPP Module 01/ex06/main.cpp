/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:50:21 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/16 15:22:48 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen obj;
    if (argc != 2)
        std::cout<<"\033[1;31mPlease enter one of these levels as parameter: DEBUG, INFO, WARNING, ERROR\033[0m"<<std::endl;
    else
        obj.complain(argv[1]);
    return 0;
}