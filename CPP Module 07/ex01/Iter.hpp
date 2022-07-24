#ifndef Iter_HPP
#define Iter_HPP

template<typename T>
void iter(T *arr, int length, void func(T &el))
{
    int i = 0;
    while (i < length)
    {
        func(arr[i]);
        i++;
    }
}

#endif