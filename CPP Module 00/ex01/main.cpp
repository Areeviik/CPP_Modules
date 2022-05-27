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
		// else if(cmd == "Search")
		// {
		// 	obj.search();
		// }
	}
}