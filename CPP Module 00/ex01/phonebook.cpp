/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:03:40 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/07 18:18:37 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp" 

void Phonebook::add(int i)
{
	std::string new_cnt;
	std::cout<<"Enter name\n";
	std::cin>>new_cnt;
	cntcs[i].set_name(new_cnt);
	std::cout<<"Enter last name\n";
	std::cin>>new_cnt;
	cntcs[i].set_last_name(new_cnt);
	std::cout<<"Enter nickname\n";
	std::cin>>new_cnt;
	cntcs[i].set_nickname(new_cnt);
	std::cout<<"Enter number\n";
	std::cin>>new_cnt;
	cntcs[i].set_number(new_cnt);
	std::cout<<"Tell me your darkest secret\n";
	getline(std::cin, new_cnt);
	getline(std::cin, new_cnt);
	cntcs[i].set_secret(new_cnt);
	if (this->count < 8)
		this->count++;
}

void Phonebook::search()
{
	int i = 0;
	int inp;
	std::cout<<"|";
	std::cout<<std::setfill(' ') <<std::setw(10)<<"Index";
	std::cout<<"|";
	std::cout<<std::setfill(' ') <<std::setw(10)<<"First name";
	std::cout<<"|";
	std::cout<<std::setfill(' ') <<std::setw(10)<<"Last name";
	std::cout<<"|";
	std::cout<<std::setfill(' ') <<std::setw(10)<<"Nickname";
	std::cout<<"|"<<std::endl;
	while (i < this->count)
	{
		std::cout<<"|";
		std::cout<<std::setfill(' ') <<std::setw(10)<<i;
		std::cout<<"|";
		std::cout<<std::setfill(' ') <<std::setw(10)<<cntcs[i].get_name();
		std::cout<<"|";
		std::cout<<std::setfill(' ') <<std::setw(10)<<cntcs[i].get_last_name();
		std::cout<<"|";
		std::cout<<std::setfill(' ') <<std::setw(10)<<cntcs[i].get_nickname();
		std::cout<<"|";
		i++;
	}
}