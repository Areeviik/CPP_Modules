/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:04:42 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/07 18:04:43 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	int i = 0;
	std::string cmd;
	Phonebook obj;

	while (1)
	{
		std::cout<<"Enter command please :)\n";
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
			std::cout<<"Enter one of three commands pls: ADD, SEARCH, EXIT\n";
	}
}