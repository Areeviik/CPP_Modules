#include "Span.hpp"

Span::Span()
{
    this->N = 0;
    this->s = 0;
}

Span::Span(unsigned int n)
{
    this->N = n;
    this->s = 0;
}

Span::Span(const Span &cp)
{
    *this = cp;
}

Span &Span::operator=(const Span &oth)
{
    if (this != &oth)
    {
        this->N = oth.N;
        this->s = oth.s;
    }
    return (*this);
}

Span::~Span(){}

void Span::addNumber(int num)
{
    this->s++;
    if (this->s > this->N)
    {
        this->s--;
        throw Span::MaxSize();
    }
    this->arr.push_back(num);
}

void Span::addManyNums(std::vector<int>::const_iterator it1, std::vector<int>::const_iterator it2)
{
    while (it1 < it2)
    {
        this->s++;
        if (this->s > this->N)
        {
            this->s--;
            throw Span::MaxSize();
        }
        this->arr.push_back(*it1);
        it1++;
    }
}

int Span::shortestSpan()
{
    if (this->arr.size() == 0)
        throw Span::EmptySpan();
    std::sort(arr.begin(), arr.end());
    int min = arr[1] - arr[0];
    for (int i = 2; i < N; i++)
    {
        if(arr[i] - arr[i - 1] < min)
            min = arr[i] - arr[i - 1];
    }
    return min;
}

int Span::longestSpan()
{
    if (this->arr.size() == 0)
        throw Span::EmptySpan();
    std::sort(arr.begin(), arr.end());
    return arr[N - 1] - arr[0];
}
