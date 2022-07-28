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
    return 0;
}