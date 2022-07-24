#include <iostream>
#include "iter.hpp"
#include <string.h>
#include <unistd.h>

template<typename T>
void ft_print(T &el)
{
    std::cout "~~~~~~~"<<el<<"~~~~~~~~~"<<std::endl;
}

int main()
{
    std::string str[4] = {"hi", "how", "are", "you"};
    int arr[3] = {1,2,3};
    iter(str, 4, ft_print);
    iter(arr, 3, ft_print);
    return 0;
}