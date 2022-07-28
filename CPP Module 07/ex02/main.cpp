#include "Array.hpp"

int main()
{
    Array<int> empty;
    Array<int> arr(10);
    std::cout <<"Size of array: "<< arr.size() <<std::endl;
    try
    {
        arr[-2] = 7;
    }
    catch(const std::exception& e)
    {
        std::cout<<"Exception: out of range"<<std::endl;
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        arr[2] = 3;
    }
    catch(const std::exception& e)
    {
        std::cout<<"Exception: out of range"<<std::endl;
        std::cerr << e.what() << '\n';
    }

    int i = 0;
    while (i < 10)
    {
        arr[i] = rand();
        std::cout<<"Arr[" << i <<"] = "<< arr[i] <<std::endl;
        i++;
    }
    return 0;
    
}