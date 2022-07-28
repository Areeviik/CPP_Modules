#include "Span.hpp"

Span::Span()
{
    this->N = 0;
}

Span::Span(unsigned int n)
{
    this->N = n;
}

Span::Span(const Span &cp)
{
    *this = cp;
}

Span &Span::operator=(const Span &oth)
{
    if (this != &oth)
        this->arr = oth.arr;
    return (*this);
}

Span::~Span(){}

void Span::addNumber(int num)
{
    if (this->arr.size() >= this->N || this->arr.size() >= this->arr.max_size())
        throw Span::MaxSize();
    this->arr.push_back(num);
}

void Span::addManyNums(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        this->addNumber(arr[i]);
}

int Span::shortestSpan()
{
    if (this->arr.size() == 0)
        throw Span::EmptySpan();
}

int Span::longestSpan()
{
    if (this->arr.size() == 0)
        throw Span::EmptySpan();
}
