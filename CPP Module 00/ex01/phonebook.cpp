/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:03:40 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/07 19:04:07 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp" 

void print_info(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str=str + '.';
	}
	std::cout<<std::setfill(' ') <<std::setw(10)<<str;
}

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
	std::cout<<"---------------------------------------------\n";
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
		print_info(cntcs[i].get_name());
		std::cout<<"|";
		print_info(cntcs[i].get_last_name());
		std::cout<<"|";
		print_info(cntcs[i].get_nickname());
		std::cout<<"|"<<std::endl;
		i++;
	}
	std::cout<<"---------------------------------------------\n";
	std::cout<<"Enter index:";
	std::cin>>inp;
	while (inp < 0 || inp > this->count)
	{
		std::cout<<"Pls enter a valid index:";
		std::cin>>inp;
	}
	std::cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout<<"First name: "<<cntcs[inp].get_name()<<std::setfill(' ') <<std::setw(10)<<std::endl;
	std::cout<<"Last name: "<<cntcs[inp].get_last_name()<<std::setfill(' ') <<std::setw(10)<<std::endl;
	std::cout<<"Nickname: "<<cntcs[inp].get_nickname()<<std::setfill(' ') <<std::setw(10)<<std::endl;
	std::cout<<"Number: "<<cntcs[inp].get_number()<<std::setfill(' ') <<std::setw(10)<<std::endl;
	std::cout<<"Darkest secret: "<<cntcs[inp].get_secret()<<std::setfill(' ') <<std::setw(10)<<std::endl;
	std::cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}