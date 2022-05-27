#include "Phonebook.hpp" 

void Phonebook::add(int i)
{
	std::string new_cnt;

	std::cout<<"Enter name\n";
	std::cin>>new_cnt;
	cntcs[i].set_name(new_cnt);
	std::cout<<"Enter surname\n";
	std::cin>>new_cnt;
	cntcs[i].set_surname(new_cnt);
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
}

void Phonebook::search()
{

}