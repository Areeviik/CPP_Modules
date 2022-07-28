#include "easyfind.hpp"

int main()
{
    std::list<int> l;

    l.push_back(28);
    l.push_back(0);
    l.push_back(7);
    l.push_back(19);
    l.push_back(99);
    l.push_back(23);

    std::list<int>::iterator i = easyfind(l, 23);
    if (i == l.end())
        std::cout<<"No occurrence is found"<<std::endl;
    else
        std::cout<<"Element "<<*i<<" is found"<<std::endl;

    std::list<int>::iterator i2 = easyfind(l, 10000);
    if (i2 == l.end())
        std::cout<<"No occurrence is found"<<std::endl;
    else
        std::cout<<"Element "<<*i2<<" is found"<<std::endl;
    
    
    return 0;
}