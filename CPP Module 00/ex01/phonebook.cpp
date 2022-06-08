/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:03:40 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/08 13:48:52 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp" 

int is_num(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
		
}

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
	std::cout<<"\033[21;32mEnter name\033[0m\n";
	std::cin>>new_cnt;
	cntcs[i].set_name(new_cnt);
	std::cout<<"\033[21;32mEnter last name\033[0m\n";
	std::cin>>new_cnt;
	cntcs[i].set_last_name(new_cnt);
	std::cout<<"\033[21;32mEnter nickname\033[0m\n";
	std::cin>>new_cnt;
	cntcs[i].set_nickname(new_cnt);
	std::cout<<"\033[21;32mEnter number\033[0m\n";
	std::cin>>new_cnt;
	while (!is_num(new_cnt))
	{
		std::cout<<"\033[1;31mPls enter valid number: \033[0m";
		std::cin>>new_cnt;
	}
	cntcs[i].set_number(new_cnt);
	std::cout<<"\033[1;30mTell me your darkest secret\033[0m\n";
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
	std::cout<<"\033[1;35m---------------------------------------------\033[0m\n";
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
	std::cout<<"\033[1;35m---------------------------------------------\033[0m\n";
	std::cout<<"\033[21;32mEnter index:\033[0m";
	std::cin>>inp;
	while (inp < 0 || inp > this->count)
	{
		std::cout<<"\033[1;31mPls enter a valid index:\033[0m";
		std::cin>>inp;
		std::cin.clear();
		std::cin.ignore();
	}
	std::cout<<"\033[1;36m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[0m\n";
	std::cout<<"\033[1;36mFirst name: \033[0m"<<cntcs[inp].get_name()<<std::setfill(' ') <<std::setw(20)<<std::endl;
	std::cout<<"\033[1;36mLast name: \033[0m"<<cntcs[inp].get_last_name()<<std::setfill(' ') <<std::setw(20)<<std::endl;
	std::cout<<"\033[1;36mNickname: \033[0m"<<cntcs[inp].get_nickname()<<std::setfill(' ') <<std::setw(20)<<std::endl;
	std::cout<<"\033[1;36mNumber: \033[0m"<<cntcs[inp].get_number()<<std::setfill(' ') <<std::setw(20)<<std::endl;
	std::cout<<"\033[1;36mDarkest secret: \033[0m"<<cntcs[inp].get_secret()<<std::setfill(' ') <<std::setw(20)<<std::endl;
	std::cout<<"\033[1;36m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[0m\n";
}