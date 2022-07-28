#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack: public std::stack <T>
{
    public:
        MutantStack<T>() {};
        MutantStack<T>(MutantStack &cp) : std::stack<T>(*this = cp){};
        MutantStack<T> &operator=(const MutantStack &val)
        {
            if (this != val)
                *this = val;
            return *this;
        };
        ~MutantStack<T>(){};
        typedef typename std::stack<T>::container_type container_type;
        typedef typename containter_type::iterator iterator;
        iterator begin(){ return this->c.begin();};
        iterator end(){ return this->c.end();};

};

#endif