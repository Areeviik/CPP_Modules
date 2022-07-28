#ifndef Span_HPP
#define Span_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
        unsigned int N;
        std::vector<int> arr;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &cp);
        Span &operator= (const Span &oth);
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
        class MaxSize:public std::exception
        {
            public:
                virtual const char * what(void) const throw()
                {
                    return ("Maximum size for Span reached");
                }
        };
        class EmptySpan: public std::exception
        {
            public:
                virtual const char * what(void) const throw()
                {
                    return ("Span is empty");
                }
        };
        void addManyNums(int *arr, int len);
};

#endif