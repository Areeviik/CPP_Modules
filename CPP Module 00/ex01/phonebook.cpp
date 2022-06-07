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
	// int inp;
	std::cout<<"     Index|First name| Last name|  Nickname"<<std::endl;
	while (i < this->count)
	{
		std::cout<<"|"<<std::endl;
		std::cout<<i<<std::endl;
		std::cout<<"|"<<std::endl;
		std::cout<<cntcs[i].get_name()<<std::endl;
		std::cout<<"|"<<std::endl;
		std::cout<<cntcs[i].get_last_name()<<std::endl;
		std::cout<<"|"<<std::endl;
		std::cout<<cntcs[i].get_nickname()<<std::endl;
		std::cout<<"|"<<std::endl;
		i++;
	}
}