#ifndef Array_HPP
#define Array_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        unsigned int _n;
        T *array;
    public:
        Array<T>()
        {
            this->array = NULL;
            this->_n = 0;
        };
        Array<T>(unsigned int n)
        {
            this->_n = n;
            this->array = new T[this->_n];
        };
        Array<T>(Array<T> &cp)
        {
            this->_n = cp._n;
            *this = cp;
        };
        ~Array()
        {
            if (this->_n > 0)
                delete [] this->array;
        };
        T &operator[](const unsigned int i)
        {
            if (i < 0 || i >= this->_n)
                throw Array::out_of_bounds();
            return this->array[i];
        };
        unsigned int size()
        {
            return this->_n;
        };
        class out_of_bounds: public std::exception
        {
            public:
                virtual const char* what(void) const throw()
                {
                    return ("Index out of bounds");
                }
        };
};

#endif