/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:04:42 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/08 13:36:08 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	int i = 0;
	std::string cmd;
	Phonebook obj;

	while (22)
	{
		std::cout<<"\033[1;33mEnter command please :)\033[0m\n";
		std::cin>>cmd;
		if (cmd == "EXIT")
		   return (0);
		else if (cmd == "ADD")
		{
			obj.add(i);
			i++;
			if (i == 8)
				i = 0;
		}
		else if(cmd == "SEARCH")
		{
			obj.search();
		}
		else
			std::cout<<"\033[1;31mEnter one of three commands pls: ADD, SEARCH, EXIT\033[0m\n";
	}
}