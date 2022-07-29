#ifndef Span_HPP
#define Span_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
        unsigned int N;
        unsigned int s;
        std::vector<int> arr;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &cp);
        ~Span();
        Span &operator= (const Span &oth);
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
        unsigned int getSize() const;
        unsigned int getLim() const;
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
        void	addManyNums(std::vector<int>::const_iterator t1, std::vector<int>::const_iterator t2);
};

#endif