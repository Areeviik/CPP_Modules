#ifndef easyfind_HPP
#define easyfind_HPP

#include <iostream>
#include <algorithm>
#include <list>

template <typename T>
typename T::iterator easyfind(T &src, int el)
{
    if (!std::find(src.begin(), src.end(), el))
        return "No occurrence is found";
    return (std::find(src.begin(), src.end(), el));
}

#endif